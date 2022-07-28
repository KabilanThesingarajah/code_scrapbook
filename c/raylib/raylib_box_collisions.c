
#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    bool collision = false;

    /* Rectangles are structs, and they are of the form, {top_left_x, top_left_y, width from that corner, height of that corner} */
    Rectangle boxA = { 200,200, 100,10 };
    Rectangle boxB = { 500,500, 30,30 };

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())
    {
        // Update
        collision = CheckCollisionRecs(boxA, boxB);

        boxB.x = GetMouseX() - boxB.width/2;
        boxB.y = GetMouseY() - boxB.height/2;

        if ((boxB.x + boxB.width) >= GetScreenWidth()) boxB.x = GetScreenWidth() - boxB.width;
        else if (boxB.x <= 0) boxB.x = 0;

        if ((boxB.y + boxB.height) >= GetScreenHeight()) boxB.y = GetScreenHeight() - boxB.height;
        else if (boxB.y <= 0) boxB.y = 0;

        if ((boxB.x + boxB.width) >= boxA.x){
            boxB.x = (float)boxA.x - boxB.width;
        }
        else if (boxB.x <= (boxA.x + boxA.width)){
            boxB.x = (float)boxA.x +boxA.width;
        }

        //if (collision) 
        // Draw
        BeginDrawing();
            ClearBackground(BLACK);
            DrawRectangleRec(boxA, GOLD);
            DrawRectangleRec(boxB, RED);
        EndDrawing();
    }

    CloseWindow();        // Close window and OpenGL context
    return 0;
}

