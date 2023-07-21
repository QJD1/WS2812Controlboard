#include "main.h"
#include "STC32G.h"

void LED_ON()
{
    P30 = P31 = 0;
}

void LED_OFF()
{
    P30 = P31 = 1;
}

