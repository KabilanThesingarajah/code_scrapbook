const express = require("express");
const bodyParser = require("body-parser");
const date = require(__dirname + "/date.js");

const app = express();

let items = ["Buy food", "Cook food", "Eat food"];
let workItems =[];
app.use(bodyParser.urlencoded({extended:true}));
app.use(express.static("public"));
app.set('view engine', 'ejs');

app.get("/",(req, res)=>{
    let day = date.getDate();
    res.render("list", {listTitle: day, newListItems: items});
});

app.get("/work",(req,res)=>{
  res.render("list", {listTitle:"Work List", newListItems:workItems});
  let item = req.body.newItem;
  workItems.push(item);
  res.redirect("/");
});

app.get("/about",(req,res)=>{
    res.render("about");
});


app.post("/",(req,res)=>{
    let item = req.body.newItem;
      
    if (req.body.list === "Work"){
      workItems.push(item);
      res.redirect("/work");
    } else{
      items.push(item);
      res.redirect("/");
    }

    
});

app.listen(3000,()=>{
    console.log("Server has started on port 3000");
});
