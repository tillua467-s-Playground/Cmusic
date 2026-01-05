#ifndef DRAW_H
#define DRAW_H

#include <raylib.h>

// colors
typedef struct UiCol
{
    Color c1;
    Color c2;
    Color c3;
    Color c4;
    Color c5;
} UiCol;

extern UiCol col;

typedef struct Circle
{
    Vector2 centerXnY;
    float radius;
} Circle;

void DrawCircleCr(Circle cir, Color color);

bool hoverButton(Circle *cir);

#endif