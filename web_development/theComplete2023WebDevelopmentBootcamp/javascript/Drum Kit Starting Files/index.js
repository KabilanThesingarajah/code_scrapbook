
var numberOfDrumButtons = document.querySelectorAll(".drum").length;

for (var i = 0; i < numberOfDrumButtons; i++){
    document.querySelectorAll(".drum")[i].addEventListener("click", function(){

        var buttonInnerHtml = this.innerHTML;

        play_sound(buttonInnerHtml);

        buttonAnimation(buttonInnerHtml);

    });
}

document.addEventListener("keydown", function (event){
    play_sound(event.key);
    buttonAnimation(event.key);
});
        // var audio = new Audio('./sounds/tom-1.mp3');
        // audio.play();


function play_sound(key){

        switch (key){
            case "w":
                var crash = new Audio("sounds/crash.mp3");
                crash.play();
                break;

            case "a":
                var kick_bass = new Audio("sounds/kick-bass.mp3");
                kick_bass.play();
                break;

            case "s":
                var snare = new Audio("sounds/snare.mp3");
                snare.play();
                break;

            case "d":
                var tom1 = new Audio("sounds/tom-1.mp3");
                tom1.play();
                break;

            case "j":
                var tom2 = new Audio("sounds/tom-2.mp3");
                tom2.play();
                break;

            case "k":
                var tom3 = new Audio("sounds/tom-3.mp3");
                tom3.play();
                break;

            case "l":
                var tom4 = new Audio("sounds/tom-4.mp3");
                tom4.play();
                break;

            default:
                console.log(buttonInnerHtml);
        }
}

function buttonAnimation(key){
    let activeButton = document.querySelector("." + key);
    activeButton.classList.add("pressed");
    setTimeout(function() {
        activeButton.classList.remove("pressed");
    }, 100);
}
