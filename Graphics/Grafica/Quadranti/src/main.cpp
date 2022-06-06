

/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute raylib_compile_execute script
*   Note that compiled executable is placed in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2013-2016 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
void Quad (int x1,int x2, int y1,int y2, Color c) {
    int Num = 50000;
    int x, y;
    for (int i = 0; i < Num; ++i) {
        x = GetRandomValue(x1, x2);
        y = GetRandomValue(y1, y2);
        DrawPixel(x,y,c);
    }
}


int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 750;

    InitWindow(screenWidth, screenHeight, "Epilessia");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------

        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
        int x, y;
        ClearBackground(RAYWHITE);

        Quad(0, 400, 0, 375, RED);
        Quad(400, 800, 0, 375, BLUE);
        Quad(0, 400, 375, 750, YELLOW);
        Quad(400, 800, 375, 750, GREEN);

        DrawText("Gabriele", 340, 360, 30, BLACK);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

