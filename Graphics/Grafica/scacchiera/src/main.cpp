

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

void scacchiera (int w, int h, int N, Color c1, Color c2){
    int lato = w/N;
    int colore = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N ; ++j) {
            if (colore%2 == 0)
                DrawRectangle( j*lato,i*lato , lato, lato, c1);
            else
                DrawRectangle(j*lato,i*lato , lato, lato, c2);
            colore++;
        }
        colore++;
    }
}

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 512;
    const int screenHeight = 512;
    int n = 8;
    int x=0, y=800/n;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(WHITE);

        scacchiera(screenWidth, screenHeight, 16, RED, BLUE);

/*
        for (int i = 0; i < n ; ++i) {
            int f = 0;
            if ( i%2 != 0){
                for (int j = 0; j < n; ++j) {
                    if (f%2 != 0) {
                        DrawRectangle(x, y, 800/n, 800/n, BLACK);
                        x = y;
                        y += 800/n;
                    }
                    if (f%2 != 0) {
                        DrawRectangle(x, y, 800/n, 800/n, WHITE);
                        x = y;
                        y += 800/n;
                    }
                    f++;
                }
                f++;
            }

        }
*/
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

