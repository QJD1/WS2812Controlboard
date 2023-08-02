#ifndef __WS2812_H_
#define __WS2812_H_

#include "main.h"

typedef enum WS2812_RunMode
{
    close_mode = 0,
    voiceCtrl_mode,
    firework_mode,
    warterfull_mode1,
    warterfull_mode2,
    warterfull_mode3,
    gradient_mode,
    rainbow_mode,
    rainbowRoll_mode,
    test_mode
};

void WS2812_WriteColor(unsigned char green , unsigned char red , unsigned char blue);
void WS2812_RunTask();
void WS2812_setMode(enum WS2812_RunMode modeToSet);
void WS2812_setBrighness(unsigned char brightnessToSet);

#endif
