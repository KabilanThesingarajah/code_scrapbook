
const express = require("express");
const app = express();
const https = require("node:https");

app.get("/", (req, res) => {
    const url = "https://api.openweathermap.org/data/2.5/weather?q=London&appid=af56282fcc8fa8786e522ae2b5fc60a3&units=metric" ;
    https.get(url, (res) => {
        console.log(res);
    });
    res.send("Server is up and running");
});

app.listen(3000, ()=>{
    console.log("app is listening on port 3000");
});
