#ifndef __MAIN_H_
#define __MAIN_H_

#include "STC32G.h"
#include "stdio.h"
#include "uart.h"
#include "led.h"

#define MAIN_Fosc        22118400L   //������ʱ�ӣ���ȷ����115200�����ʣ�
#define Baudrate1   (65536 - MAIN_Fosc / 115200 / 4)

typedef 	unsigned char	u8;
typedef 	unsigned int	u16;
typedef 	unsigned long	u32;

void SYS_Init();
void Delay_ms(unsigned int xms);		//@22.1184MHz

#endif

