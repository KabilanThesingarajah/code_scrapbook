const express = require("express");
const app = express();
const https = require("node:https");


app.get("/", (req, res) => {
    // This requires an api key setup 
    const url = "https://api.openweathermap.org/data/2.5/weather?q=London&appid=" + process.env.OPENWEATHERMAPKEY + "&units=metric" ;
    https.get(url, (res) => {
        console.log(res);
    });
    res.send("Server is up and running");
});

app.listen(3000, ()=>{
    console.log("app is listening on port 3000");
});

