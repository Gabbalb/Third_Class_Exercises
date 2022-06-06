
#include <cstdlib>
#include <ctime>
#include "raylib.h"

void disegna_colonne (int ncolone[], int max)


int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1000;
    const int screenHeight = 500;
    const int SPAZIO_col = 100;
    const int LARGHEZZA_tra_col = 100;
    const int LARGHEZZA_col = 50;
    const int N_COLONNE = 6;
    int colonne[N_COLONNE];
    srand(time(NULL));

    for (int i = 0; i < N_COLONNE; ++i) {
       colonne[i]= rand()%300;
    }


    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(WHITE);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

