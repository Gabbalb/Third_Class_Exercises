

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

float uniformesx (float v, float t){
    float s;
    s = v*t;
    return s;
}

float uniformedx (float v, float t){
    float s;
    s = v*t;
    return 1024 - s;
}

float accelerato (float v, float t){
    const float G = 9.81;
    float s;
    s =  -0.5 * G * t * t + v * t;
    return s;
}

int main(void)
{
    float x, y, x1, y1;
    x = 0;
    y = 1;
    x1 = 512;
    y1 = 1;
    float vx, vy, vx1, vy1;
    vx = 65;
    vy = 65;
    vx1 = 60;
    vy1 = 60;
    float t = 0;


    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1024;
    const int screenHeight = 512;
    int xpersona1 = 12;

    InitWindow(screenWidth, screenHeight, "Lancio pallina");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------


        t += 0.1;
        x = uniformesx(vx, t);
        y = accelerato(vy, t);
        x1 = uniformedx(vx1, t);
        y1 = accelerato(vx1, t);



        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(Color{99, 151, 208});

        //nuvola 1
        DrawCircle( 100, 100, 40, WHITE);
        DrawCircle( 150, 100, 40, WHITE);
        DrawCircle( 150, 70, 40, WHITE);
        DrawCircle( 200, 100, 40, WHITE);

        //nuvola 2
        DrawCircle( 400, 120, 40, WHITE);
        DrawCircle( 450, 120, 40, WHITE);
        DrawCircle( 450, 90, 40, WHITE);
        DrawCircle( 500, 120, 40, WHITE);

        //sole
        DrawCircle( 850, 120, 90, ORANGE);
        DrawCircle( 850, 120, 60, YELLOW);

        //palla rossa
        DrawCircle(x, 512 - y, 20, RED);

        //palla gialla
        DrawCircle(x1, 512 - y1, 20, YELLOW);

        //terreno
        DrawRectangle(0, 480, 1024, 60, DARKBROWN);
        DrawRectangle(0, 480, 1024, 16, GREEN);

        DrawRectangle(xpersona1, 400, 10, 50, BLACK);

        if (IsKeyDown(KEY_LEFT))
            xpersona1-= 5;
        if (IsKeyDown(KEY_RIGHT))
            xpersona1+= 5;



        EndDrawing();
        //----------------------------------------------------------------------------------

        if (y < 0 && y1 < 0){
            break;
        }
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

