#include "main.h"



#define SEND_BIT0 {P51 = 1; NOP8(); P51 = 0; NOP16();}
#define SEND_BIT1 {P51 = 1; NOP19(); P51 = 0; NOP3();}

unsigned char bdata green_dat , red_dat , blue_dat;

sbit green_dat_bit0 = green_dat^0;
sbit green_dat_bit1 = green_dat^1;
sbit green_dat_bit2 = green_dat^2;
sbit green_dat_bit3 = green_dat^3;
sbit green_dat_bit4 = green_dat^4;
sbit green_dat_bit5 = green_dat^5;
sbit green_dat_bit6 = green_dat^6;
sbit green_dat_bit7 = green_dat^7;

sbit red_dat_bit0 = red_dat^0;
sbit red_dat_bit1 = red_dat^1;
sbit red_dat_bit2 = red_dat^2;
sbit red_dat_bit3 = red_dat^3;
sbit red_dat_bit4 = red_dat^4;
sbit red_dat_bit5 = red_dat^5;
sbit red_dat_bit6 = red_dat^6;
sbit red_dat_bit7 = red_dat^7;

sbit blue_dat_bit0 = blue_dat^0;
sbit blue_dat_bit1 = blue_dat^1;
sbit blue_dat_bit2 = blue_dat^2;
sbit blue_dat_bit3 = blue_dat^3;
sbit blue_dat_bit4 = blue_dat^4;
sbit blue_dat_bit5 = blue_dat^5;
sbit blue_dat_bit6 = blue_dat^6;
sbit blue_dat_bit7 = blue_dat^7;


void WS2812_WriteColor(unsigned char green , unsigned char red , unsigned char blue)
{
    green_dat = green;
    red_dat = red;
    blue_dat = blue;
    //发送绿色
    if(green_dat_bit7){SEND_BIT1}else{SEND_BIT0};
    if(green_dat_bit6){SEND_BIT1}else{SEND_BIT0};
    if(green_dat_bit5){SEND_BIT1}else{SEND_BIT0};
    if(green_dat_bit4){SEND_BIT1}else{SEND_BIT0};
    if(green_dat_bit3){SEND_BIT1}else{SEND_BIT0};
    if(green_dat_bit2){SEND_BIT1}else{SEND_BIT0};
    if(green_dat_bit1){SEND_BIT1}else{SEND_BIT0};
	if(green_dat_bit0){SEND_BIT1}else{SEND_BIT0};
    //发送红色
    if(red_dat_bit7){SEND_BIT1}else{SEND_BIT0};
    if(red_dat_bit6){SEND_BIT1}else{SEND_BIT0};
    if(red_dat_bit5){SEND_BIT1}else{SEND_BIT0};
    if(red_dat_bit4){SEND_BIT1}else{SEND_BIT0};
    if(red_dat_bit3){SEND_BIT1}else{SEND_BIT0};
    if(red_dat_bit2){SEND_BIT1}else{SEND_BIT0};
    if(red_dat_bit1){SEND_BIT1}else{SEND_BIT0};
	if(red_dat_bit0){SEND_BIT1}else{SEND_BIT0};
    //发送蓝色
    if(blue_dat_bit7){SEND_BIT1}else{SEND_BIT0};
    if(blue_dat_bit6){SEND_BIT1}else{SEND_BIT0};
    if(blue_dat_bit5){SEND_BIT1}else{SEND_BIT0};
    if(blue_dat_bit4){SEND_BIT1}else{SEND_BIT0};
    if(blue_dat_bit3){SEND_BIT1}else{SEND_BIT0};
    if(blue_dat_bit2){SEND_BIT1}else{SEND_BIT0};
    if(blue_dat_bit1){SEND_BIT1}else{SEND_BIT0};
	if(blue_dat_bit0){SEND_BIT1}else{SEND_BIT0};

}

#define WS2812_NUM 30//灯珠数量
enum WS2812_RunMode mode = voiceCtrl_mode;
unsigned char voiceGrade = 0;

void WS2812_RunTask()
{
    unsigned char i;
    while(1)
    {
        switch (mode)
        {
            //关闭模式
        case close_mode:
            for ( i = 0; i < WS2812_NUM; i++)
            {
                WS2812_WriteColor(0,0,0);
            }
            Delay300us();
            break;

            //声控模式
        case voiceCtrl_mode:
            voiceGrade = Get_ADC12bitResult(0)/(2100/WS2812_NUM);
            if(voiceGrade > WS2812_NUM) voiceGrade = WS2812_NUM;
            for ( i = 0; i < WS2812_NUM; i++)
            {
                if(i<voiceGrade)    WS2812_WriteColor(0xff,0,0);
                else WS2812_WriteColor(0,0,0);
            }
            
			printf("grade:%d  adc:%d\r\n",voiceGrade,Get_ADC12bitResult(0));	
            Delay300us();
            break;
        default:
            break;
        }
    }
}