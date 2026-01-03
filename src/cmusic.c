#include "cmusic.h"

int main()
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_VSYNC_HINT);

    Circle Button = {0};
    int isPressed = 0;

    InitWindow(GetMonitorWidth(0) ? GetMonitorWidth(0) / 2 : 800, GetMonitorHeight(0) ? GetMonitorHeight(0) / 2 : 450, "Cmusic - by tillua467");
    while (!WindowShouldClose())
    {
        Button.centerXnY = (Vector2){
            GetScreenWidth() / 2,
            GetScreenHeight() / 2 + 120};

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText(TextFormat("Gay shi %d", isPressed), GetScreenWidth() / 2 - 190, GetScreenHeight() / 2 - 50, 100, LIGHTGRAY);
        DrawCircleCr(Button, RED);

        // for hover effect
        if (hoverButton(&Button))
            Button.radius = 55.0f;
        else
            Button.radius = 50.0f;

        // this how we check if it's clicked or not
        if (hoverButton(&Button) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            Button.radius = 58.0f;
            isPressed++;
        }
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
