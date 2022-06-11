
/* Pong clone only */


#include "raylib.h"


int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    int scrollSpeed = 60;
    int playerY = screenHeight/2 - 40;
    int playerExpectedY = playerY;
    int playerWidth = 80;
    int playerHeight = 200;

    int playerMaxHeight = screenHeight - (playerHeight);

    int botY = playerY;
    int botSpeed = 4;

    // perfect but slowed movement with random variance in the movement

    int ballX = screenWidth/2;
    int ballY = screenHeight/2;
    int ballSize = 30;
    int ballXDir = 1;
    int ballYDir = 1;
    int ballMaxHeight = screenHeight - ballSize;
    int ballSpeed = 4;


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
        ballX += ballSpeed*ballXDir;
        ballY += ballSpeed*ballYDir;

        // prevent ball from going off the board
        if (ballY > ballMaxHeight){
            ballY = ballMaxHeight;
            ballYDir *=-1;
        } 
        else if (ballY < 0){ // similar to condition above
            ballY = 0;
            ballYDir *=-1;
        }


        // Draw
        BeginDrawing();

            ClearBackground(BLACK); // clear the background
            DrawRectangle(screenWidth - playerWidth - 40, playerY, playerWidth,playerHeight,WHITE); // draw player
            DrawRectangle(ballX,ballY,ballSize,ballSize,WHITE); // draw ball
            DrawRectangle(40,botY,playerWidth,playerHeight,WHITE); // draw bot

        EndDrawing();
    }

    CloseWindow();        // Close window and OpenGL context
    return 0;
}

