
//$("h1").css("color","yellow");
//$("h1").classAdd("yellow");
//$("h1").classRemove("yellow");

//$("button").text();
//$("button").html("<em>Emphatic</em>");

////get attributes
//$("img").attr("src");

////set attributes
//$("img").attr("src", "drum.png");

////event listener
//$("h1").click(function () {
//  //callback function
//});


// $(document).keypress(function(event) {
//   $("h1").text(event.key);
// });

//or

$(document).on("keypress",function(event) {
  $("h1").text(event.key);
});


//add elements 

$("h1").before("<button>New<button>");
$("h1").prepend("<button>New<button>");
$("h1").after("<button>New<button>");
$("h1").append("<button>New<button>");


//remove elements
$("h1").remove();
