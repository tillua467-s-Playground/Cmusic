#include "cmusic.h"

int main()
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_VSYNC_HINT);

    InitWindow(GetMonitorWidth(0) ? GetMonitorWidth(0) / 2 : 800, GetMonitorHeight(0) ? GetMonitorHeight(0) / 2 : 450, "Cmusic - by tillua467");
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Gay shi", 190, 200, 100, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
