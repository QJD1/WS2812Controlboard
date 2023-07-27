#ifndef __MAIN_H_
#define __MAIN_H_

#include "STC32G.h"
#include "stdio.h"
#include "uart.h"
#include "led.h"
#include "adc.h"
#include "ws2812.h"

#define MAIN_Fosc        22118400L   //定义主时钟（精确计算115200波特率）
#define Baudrate1   (65536 - MAIN_Fosc / 115200 / 4)


void SYS_Init();
void Delay_ms(unsigned int xms);		//@22.1184MHz
void Delay300us();		//@22.1184MHz


#endif

