#ifndef __MAIN_H_
#define __MAIN_H_

#include "STC32G.h"
#include "led.h"
#include "stdio.h"

#define MAIN_Fosc        24000000UL

typedef 	unsigned char	u8;
typedef 	unsigned int	u16;
typedef 	unsigned long	u32;


void System_Init();
void GPIO_Init();
void delay_ms(u8 ms);

#endif