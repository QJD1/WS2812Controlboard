#ifndef __WS2812_H_
#define __WS2812_H_

#include "main.h"

typedef enum WS2812_RunMode
{
    close_mode = 0,
    voiceCtrl_mode,
    firework_mode,
    test_mode
};

void WS2812_WriteColor(unsigned char green , unsigned char red , unsigned char blue);
void WS2812_RunTask();
void WS2812_setMode(enum WS2812_RunMode modeToSet);

#endif
