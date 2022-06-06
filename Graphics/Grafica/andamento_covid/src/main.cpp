
#include "raylib.h"
media mobile (dati_originali, dati_filtarti, n)

void disegna (int v[], int n, int max, int width, int height){

    int x0, y0, x1, y1;
    for (int i = 1; i < n; ++i) {
        y0 = height - ((v[i -1] * height)/max);
        y1 = height - ((v[i] * height)/max) ;
        x0 = (i - 1) * width /n;
        x1 = i * width/n;
        DrawLine(x0, y0, x1, y1, RED);
    }
}

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Grafici Covid");

    const int MAXDATI = 2000;

    int dati_originali[MAXDATI];
    int dati_filtrati[MAXDATI];

    char titolo [100];

    int n, max_valore;

    carica(dati_originali, n, max_valore, titolo, "deceduti_giornalieri.csv");





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

        disegna(dati_originali, n, max_valore, screenWidth, screenHeight);
        disegna(dati_filtrati, n, max_valore, screenWidth, screenHeight);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

