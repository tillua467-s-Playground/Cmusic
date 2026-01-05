#include "cmusic.h"

#define fSize 20

int main()
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_VSYNC_HINT);

    Circle Button = {0};

    InitWindow(GetMonitorWidth(0) ? GetMonitorWidth(0) / 2 : 800, GetMonitorHeight(0) ? GetMonitorHeight(0) / 2 : 450, "Cmusic - by tillua467");

    // GUI varibles
    Rectangle LogoBox = {0};
    LogoBox.x = 0;
    LogoBox.y = 0;
    LogoBox.height = 50;

    Rectangle mBox = {0};
    mBox.x = 0;
    mBox.y = 50;

    Rectangle cBox = {0};
    cBox.y = 0;

    Rectangle ConBox = {0};
    ConBox.width = 50;
    ConBox.height = 50;

    int lWidth = MeasureText("CMUSIC", fSize);

    while (!WindowShouldClose())
    {
        LogoBox.width = GetScreenWidth() * 0.65f;
        mBox.width = LogoBox.width;
        mBox.height = GetScreenHeight();
        cBox.x = LogoBox.width;
        cBox.width = GetScreenWidth() - LogoBox.width;
        cBox.height = GetScreenHeight() * 0.75f;
        ConBox.x = mBox.width;
        ConBox.y = cBox.height;
        ConBox.height = GetScreenHeight();
        ConBox.width = GetScreenWidth();

        Button.centerXnY = (Vector2){
            GetScreenWidth() / 2,
            GetScreenHeight() / 2 + 120};

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangleRec(LogoBox, col.c1);
        // rectX + (rectW - textWidth) / 2; -> for X
        // rectY + (rectH - fontSize) / 2; -> for Y
        DrawText("CMUSIC", (LogoBox.x + (LogoBox.width - lWidth) / 2), (LogoBox.y + (LogoBox.height - fSize)) / 2, fSize, BLACK);
        DrawRectangleRec(mBox, col.c2);
        DrawRectangleRec(cBox, col.c3);
        DrawRectangleRec(ConBox, col.c4);
        // DrawCircleCr(Button, RED);

        // for hover effect
        if (hoverButton(&Button))
            Button.radius = 55.0f;
        else
            Button.radius = 50.0f;

        // this how we check if it's clicked or not
        if (hoverButton(&Button) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            Button.radius = 58.0f;
        }
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
