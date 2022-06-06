

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

void DisegnaPunto(int x, int y, int dim, Color c){
    for (int i = 0; i < dim; ++i) {
        for (int j = 0; j < dim; ++j) {
            DrawPixel(x + i, y + j, c);
        }
    }
}

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1024;
    const int screenHeight = 778;

    InitWindow(screenWidth, screenHeight, "PornHub launcher"); //titolo sulla barra sopra


    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key... serve per far continuare ad aggiornare lo schermo
    { //mainloop c'è sempre
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(BLACK);
        DisegnaPunto(100, 200, 5, ORANGE);
        DrawText("Porn", 355, 380, 50, ORANGE);
        DrawText("Hub", 479, 380, 50, WHITE);
        DrawText("KIDS", 580, 380, 50, BLUE);
        DrawText("From Kids for kids", 355, 430, 20, WHITE);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

