
const express = require("express");
const bodyParser = require("body-parser");
import("got");
const https = require("https");

const port = 3000;
const app = express();
app.use(express.static("public"));
app.use(bodyParser.urlencoded({extended:true}));

app.get('/', function(req, res) {
	res.sendFile(__dirname+ '/signup.html');
});

app.post("/",(req,res)=>{
	const firstName = req.body.fName;
	const lastName = req.body.lName;
	const email = req.body.email;
	const data = {
		members: [
			{
				email_address: email,
				status: "subscribed",
				merge_fields: {FNAME: firstName, LNAME: lastName}
			}
		]
	};
	const jsonData = JSON.stringify(data);
	const dc = process.env.MAILCHIMPDC;

	const apiKey = process.env.MAILCHIMPAPIKEY;
	const audienceID = process.env.MAILCHIMPAUDIENCEID;
	const url = "https://"+ dc +".api.mailchimp.com/3.0/lists/" + audienceID;
	const options = {
		method:"POST",
		auth:"Kabilan:"+apiKey+"22"
	};
	const request = https.request(url, options,(response) =>{
		response.on("data", (data)=>{
			console.log(JSON.parse(data));
			console.log("status code: " + response.statusCode);
			if (response.statusCode === 200){
				res.sendFile(__dirname + "/success.html");
			} else{
				res.sendFile(__dirname + "/failure.html");
			}
		});
	});

	request.write(jsonData);
	request.end();

});

app.post("/failure",(req,res)=>{
	res.redirect("/");
});

app.listen(port, ()=> {
	console.log("app listening on port "+port);
});

