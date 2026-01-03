#include "draw.h"

void DrawCircleCr(Circle cir, Color color)
{
    DrawCircleV(cir.centerXnY, cir.radius, color);
}

bool hoverButton(Circle *cir)
{
    if (CheckCollisionPointCircle(GetMousePosition(), cir->centerXnY, cir->radius))
        TraceLog(LOG_INFO, "CMUSIC: COLLISION DETECTED (x,y) = (%f, %f)", cir->centerXnY.x, cir->centerXnY.y);
    return CheckCollisionPointCircle(GetMousePosition(), cir->centerXnY, cir->radius);
}
