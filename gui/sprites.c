#include "sprites.h"

const uint8_t SPRITE_X_PIXELS[] =
{
    1, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 1, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 1, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 1, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 1, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 1, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 1, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 1,
};

Sprite_t SPRITE_X = { SPRITE_X_PIXELS, 9, 9 };

// --------------------------------------------------------------------------------