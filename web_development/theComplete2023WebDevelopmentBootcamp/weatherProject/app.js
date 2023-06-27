const express = require("express");
const https = require("node:https");
const bodyParser = require("body-parser");


const app = express();
app.use(bodyParser.urlencoded({extended: true}));

app.get("/", (req, res) => {
    res.sendFile(__dirname + "/index.html");

});

app.post("/", (req,res) =>{
    const query = req.body.cityName;
    const unit = "metric"
    // This requires an api key setup 
    const url = "https://api.openweathermap.org/data/2.5/weather?q="+ query +"&appid=" + process.env.OPENWEATHERMAPKEY + "&units="+unit ;
    https.get(url, (response) => {
        console.log(response.statusCode);
        response.on("data", (data) =>{
            const weatherData = JSON.parse(data);
            const temp = weatherData.main.temp;
            const weather = weatherData.weather[0].description
            console.log(weather);
            res.write("<h1>The temperature in "+ req.body.cityName + " is " + temp + " degrees celcius.</h1>\n <p> The weather is currently " + weather + "<\p>");
            res.write("<img src=https://openweathermap.org/img/wn/" + weatherData.weather[0].icon + "@2x.png>");
            res.send();
        });
    });
});

app.listen(3000, ()=>{
    console.log("app is listening on port 3000");
});

