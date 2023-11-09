#include "DrawPad.hpp"
#include <math.h>

void DrawMain()
{
    Clear(kColorBlack);

    DrawText("Hello, world!!", -12*14/2, 44, kColorWhite);

    FillCircle(100, 100, 100,kColorRed);
}

