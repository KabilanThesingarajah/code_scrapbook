
 const express = require('express');

const app = express();
app.get("/", function(request, response){
    console.log(request);
    response.send("Hello");
});

app.get("/about", function(req, res){
    console.log(req);
    res.send( `<h1>About</h1>
<p>This is the about me section</p>
`);
});

app.listen(3000, function(){
    console.log("Server started on port 3000");
});
