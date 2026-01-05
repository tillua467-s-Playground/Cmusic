#include "draw.h"

// colors
UiCol col = {
    (Color){86, 143, 135, 255},
    (Color){27, 60, 83, 255},
    (Color){29, 84, 109, 255},
    (Color){144, 171, 139, 255},
    (Color){33, 52, 72, 255}, // txt color
};

void DrawCircleCr(Circle cir, Color color)
{
    DrawCircleV(cir.centerXnY, cir.radius, color);
}

bool hoverButton(Circle *cir)
{
    //  if (CheckCollisionPointCircle(GetMousePosition(), cir->centerXnY, cir->radius))
    //     TraceLog(LOG_INFO, "CMUSIC: COLLISION DETECTED (x,y) = (%f, %f)", cir->centerXnY.x, cir->centerXnY.y);
    return CheckCollisionPointCircle(GetMousePosition(), cir->centerXnY, cir->radius);
}
