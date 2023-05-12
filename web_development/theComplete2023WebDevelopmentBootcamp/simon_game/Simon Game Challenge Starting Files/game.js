
let buttonColors = [ "red", "blue", "green", "yellow"];
let gamePattern = [];
let userClickedPattern = [];
let gameStart = false;
let level = 0;

function nextSequence(){
    userClickedPattern = [];
    let randomNumber = Math.floor(Math.random() * (4) );
    let randomChosenColour = buttonColors[randomNumber];
    gamePattern.push(randomChosenColour);
    $("#" + randomChosenColour).fadeIn(100).fadeOut(100).fadeIn(100); // animation to indicate which button to press
    playSound(randomChosenColour);
    $("h1").text("Level "+level); // show level
    level +=1;
}

function playSound(name){
    let audio = new Audio("./sounds/" + name + ".mp3");
    audio.play();
}

function animatePress(currentColour){
    $("." + currentColour).addClass("pressed");
    setTimeout(function(){ 
        $("." + currentColour).removeClass("pressed");
    },100);
}

function startOver(){
    gamePattern = [];
    userClickedPattern = [];

    gameStart = false;
    level = 0;
}

function checkAnswer(currentLevel){

    if (gamePattern[currentLevel] === userClickedPattern[currentLevel]){
        console.log("success");
        if (userClickedPattern.length === gamePattern.length){
        console.log("end of sequence");
            setTimeout(function(){
                nextSequence();
            }, 1000);
        }
    }
    else{
        console.log("wrong");
        gameOver();
        startOver();
    }

}

function gameOver(){
    playSound("wrong");
    $("body").addClass("game-over");
    setTimeout(function(){
        $("body").removeClass("game-over");
    },200);
    $("h1").text("Game Over, Press Any Key to Restart");
}

$(".btn").on("click",function(){
    let userChosenColour = this.id;
    userClickedPattern.push(userChosenColour);
    playSound(userChosenColour);
    console.log(userClickedPattern);
    checkAnswer(userClickedPattern.length -1);
});



$(document).on("keypress",function(){
    if (!gameStart){
        nextSequence();
        gameStart = true;
    }
});


