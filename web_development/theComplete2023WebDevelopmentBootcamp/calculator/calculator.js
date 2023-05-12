const express = require('express');
const app = express();
let bodyParser = require('body-parser');

app.use(bodyParser.urlencoded({extended: true}));


app.get('/', (req, res) => {
  res.sendFile(__dirname + "/index.html");
});

app.post("/",(req, res) => {
    let num1 = Number(req.body.num1);
    let num2 = Number(req.body.num2);
    let result = num1 + num2;
    res.send("the result of the calculation is " + result);
});

app.get("/bmicalculator", (req, res) => {
  res.sendFile(__dirname + "/bmiCalculator.html");
});


app.post("/bmicalculator",(req, res) => {
    let height = parseFloat(req.body.height);
    let weight = parseFloat(req.body.weight);
    let result = weight / (height*height);
    res.send("Your BMI is " + result);
});


app.listen(3000, () => {
  console.log(`Example app listening on port 3000`)
});
