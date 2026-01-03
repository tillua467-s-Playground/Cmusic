#ifndef DRAW_H
#define DRAW_H

#include <raylib.h>

typedef struct Circle
{
    Vector2 centerXnY;
    float radius;
} Circle;

void DrawCircleCr(Circle cir, Color color);

bool hoverButton(Circle *cir);

#endif