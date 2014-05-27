#include "tiro.h"

Tiro TIRO_create(Position pos, float vel, Position orientation)
{
    Tiro *tiro = malloc(sizeof(*tiro));

    tiro->pos = pos;
    tiro->vel = vel;
    tiro->orientation = orientation;

    return *tiro;
}

void TIRO_update()
{
}
