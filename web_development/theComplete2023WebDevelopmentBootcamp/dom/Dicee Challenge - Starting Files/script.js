
player_1_roll = Math.floor(Math.random() * 6); // a random number between 0 and 5.
player_2_roll = Math.floor(Math.random() * 6);

images = ["images/dice1.png", "images/dice2.png", "images/dice3.png", "images/dice4.png", "images/dice5.png", "images/dice6.png"]

//reveal images
document.querySelector(".img1").setAttribute("src", images[player_1_roll]);
document.querySelector(".img2").setAttribute("src", images[player_2_roll]);

if (player_1_roll > player_2_roll){
    document.querySelector("h1").textContent = "Player 1 Wins!";
}
else if (player_2_roll > player_1_roll){
    document.querySelector("h1").textContent = "Player 2 Wins!";
}
else{
    document.querySelector("h1").textContent = "Draw!";
}
