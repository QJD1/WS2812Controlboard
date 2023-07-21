#include "main.h"

int main()
{
	System_Init();
	
	while (1)
	{
		LED_ON();
		delay_ms(500);
		LED_OFF();
		delay_ms(500);
	}
	
	

	while(1);
	return 0;
}

void System_Init()
{
	WTST = 0;  //设置程序指令延时参数，赋值为0可将CPU执行指令的速度设置为最快
    EAXFR = 1; //扩展寄存器(XFR)访问使能
    CKCON = 0; //提高访问XRAM速度
	GPIO_Init();
}

void GPIO_Init()
{
    P3M0 = 0x03; P3M1 = 0x00; 
	
}

//========================================================================
// 函数: void  delay_ms(unsigned char ms)
// 描述: 延时函数。
// 参数: ms,要延时的ms数, 这里只支持1~255ms. 自动适应主时钟.
// 返回: none.
// 版本: VER1.0
// 日期: 2013-4-1
// 备注: 
//========================================================================
void  delay_ms(u8 ms)
{
     u16 i;
     do{
          i = MAIN_Fosc / 6000;
          while(--i);
     }while(--ms);
}