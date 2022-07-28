/* Pong clone only */

#include "raylib.h"
#include <stdlib.h>

// I need to refactor this and make the rectangles from the Rectangle.

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    int scrollSpeed = 60;
    int playerWidth = 80;
    int playerHeight = 200;
    int playerY = screenHeight/2 - 40;
    int playerX = screenWidth - playerWidth - 40;
    int playerExpectedY = playerY;
    int playerMaxHeight = screenHeight - (playerHeight);
    int playerPoints = 0;

    int botY = playerY;
    int botX = 40;
    int botPoints = 0;
    int botSpeed = 7;

    // perfect but slowed movement with random variance in the movement

    int ballX = screenWidth/2;
    int ballY = screenHeight/2;
    int ballSize = 30;
    int ballXDir = 1;
    int ballYDir = 1;
    int ballMaxHeight = screenHeight - ballSize;
    int ballMaxWidth = screenWidth - ballSize;
    int ballSpeed = 4;
    int ball_reset_wait_time = 60;

    int widthOfBallAndPlayerTimesHalf = (playerWidth + ballSize)*0.5;
    int distanceBetweenCentersOfBallAndPaddleX = abs((ballX+ ballSize*0.5) - (playerX + playerWidth*0.5));
    int heightOfBallAndPlayerTimesHalf = (playerHeight + ballSize)*0.5;
    int distanceBetweenCentersOfBallAndPaddleY = abs((ballY+ ballSize*0.5) - (playerY + playerHeight*0.5));

    InitWindow(screenWidth, screenHeight, "pong."); 
    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())
    {
        // Update
        
        // bot movement
        // ------------
        if(botY < ballY - playerHeight/2){
            botY += botSpeed;
        }
        else if (botY > ballY + playerHeight/2){
            botY -= botSpeed;
        }

        // player movement
        //----------------
        playerExpectedY -= (GetMouseWheelMove()*scrollSpeed); // where you want to be
                                                              
        // smooth player movement to get to where you want to be.
        if (playerY != playerExpectedY){
            playerY += (playerExpectedY-playerY)/10;
        }

        // prevent player from going off the board
        if (playerY > playerMaxHeight){
            playerY = playerMaxHeight;
            playerExpectedY=playerY;
        } 
        else if (playerY < 0){ // similar to condition above
            playerY = 0;
            playerExpectedY = playerY;
        }

        // ball movement
        // -------------
        for(int j = 0; j < ballSpeed; j++){
            if (heightOfBallAndPlayerTimesHalf > distanceBetweenCentersOfBallAndPaddleY){
                ballYDir*=-1;
                break;
            }
            ballY += ballYDir;
        }
        for(int i = 0; i < ballSpeed; i++){
            if (widthOfBallAndPlayerTimesHalf > distanceBetweenCentersOfBallAndPaddleX){
                ballXDir*=-1;
                break;
            }
            ballX += 1;
        }



        // prevent ball from going off the board
        if (ballY > ballMaxHeight){
            ballY = ballMaxHeight;
            ballYDir *=-1;
        } 
        else if (ballY < 0){ // similar to condition above
            ballY = 0;
            ballYDir *=-1;
        }

        

        // if the ball goes past the boards a score count should be updated
        if (ballX > ballMaxWidth){
            botPoints +=1;
            ball_reset_wait_time = 60;
        }
        else if (ballX < 0){
            playerPoints +=1;
            ball_reset_wait_time = 60;
        }

        if (ball_reset_wait_time > 0){
            ballX = screenWidth/2;
            ballY = screenHeight/2;
            ball_reset_wait_time -=1;
        }

        // Draw
        BeginDrawing();

            ClearBackground(BLACK); // clear the background
            DrawRectangle(playerX, playerY, playerWidth,playerHeight,WHITE); // draw player
            DrawRectangle(botX,botY,playerWidth,playerHeight,WHITE); // draw bot
            DrawRectangle(ballX,ballY,ballSize,ballSize,BLUE); // draw ball

        EndDrawing();
    }

    CloseWindow();        // Close window and OpenGL context
    return 0;
};
