/**
 * @author 漆锦东
 * @brief 此项目用于ws2812控制板的驱动
 * @date 2023/7/24
 * **/


#include "main.h"

/******************** 主函数 **************************/
void main(void)
{
    SYS_Init();
    LED_OFF();

    WS2812_RunTask();
    while (1)
    {
    }
}


//========================================================================
void SYS_Init()
{
    WTST = 0;  //设置程序指令延时参数，赋值为0可将CPU执行指令的速度设置为最快
    EAXFR = 1; //扩展寄存器(XFR)访问使能
    CKCON = 0; //提高访问XRAM速度

    //IO口配置
    P1M0 = 0x00; P1M1 = 0x01; 
    P3M0 = 0x00; P3M1 = 0x00;
    P5M0 = 0x06; P5M1 = 0x00; 

    P51 = 0;

    ADC_Init();
    UART1_config();    // 选择波特率, 2: 使用Timer2做波特率, 其它值: 使用Timer1做波特率.

    EA = 1;             //允许全局中断
}

void Delay_ms(unsigned int xms)		//@22.1184MHz
{
	unsigned long i;
	unsigned int k;
    for(k = 0;k<xms ;k++)
    {
			_nop_();
			i = 5528UL;
			while (i) i--;
    }

}

void Delay300us()		//@22.1184MHz
{
	unsigned long i;

	_nop_();
	_nop_();
	_nop_();
	i = 1657UL;
	while (i) i--;
}