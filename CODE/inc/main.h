#ifndef __MAIN_H_
#define __MAIN_H_

#include "STC32G.h"
#include "stdio.h"

#define MAIN_Fosc        22118400L   //定义主时钟（精确计算115200波特率）
#define Baudrate1   (65536 - MAIN_Fosc / 115200 / 4)

typedef 	unsigned char	u8;
typedef 	unsigned int	u16;
typedef 	unsigned long	u32;

typedef enum Bool
{
    false = 0,
    true  = 1
};

void SYS_Init();
void UART1_config();
void PrintString1(u8 *puts);
void UART1_Send (u8 bat);

#endif

