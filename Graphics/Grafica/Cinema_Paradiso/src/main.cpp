#include "raylib.h"

const int RIGHE = 20;
const int COLONNE = 20;

void disegna_posto(int x, int y, bool prenotato){
    if(prenotato)
        DrawCircle(x + 10, y + 10, 10, RED);
    else
        DrawCircle(x + 10, y + 10, 10, GREEN);
}

void disegna_sala(bool posti[COLONNE][RIGHE], int righe, int w, int h){
    for (int i = 0; i < righe; ++i) {
        for (int j = 0; j < COLONNE; ++j) {
            int x = w/COLONNE * j;
            int y = y/righe * i;
            disegna_posto(x,y,posti[i][j]);
        }
    }
}


int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;


    bool posti[COLONNE][RIGHE];
    for (int i = 0; i < RIGHE ; ++i) {
        for (int j = 0; j < COLONNE; ++j) {
            posti[i][j] = false;
        }
    }



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

        ClearBackground(RAYWHITE);

        disegna_sala(posti, RIGHE, screenWidth, screenHeight);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

