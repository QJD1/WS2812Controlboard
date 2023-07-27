#include "main.h"
#include <stdlib.h>
#include "math.h"

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
unsigned char voiceGrade = 0;//音量等级
unsigned char brightness = 80;//亮度
unsigned char color_G[WS2812_NUM];
unsigned char color_R[WS2812_NUM];
unsigned char color_B[WS2812_NUM];

//显示
void WS2812_Show()
{
    unsigned char i;
    for ( i = 0; i < WS2812_NUM; i++)
    {
        WS2812_WriteColor(color_G[i],color_R[i],color_B[i]);
    }
    Delay300us();
}

void WS2812_RunTask()
{
    unsigned char i;
    unsigned char randNum_G,randNum_R,randNum_B;
    bit firework_busy = 0;
    unsigned char firework_index = 0;

    while(1)
    {
        //选择模式 ，然后给三个颜色赋值
        switch (mode)
        {
            //关闭模式
        case close_mode:
            for(i = 0 ; i<WS2812_NUM ; i++)
            {
                color_G[i] = 0;
                color_R[i] = 0;
                color_B[i] = 0;
            }
            break;

            //声控模式
        case voiceCtrl_mode:
            voiceGrade = Get_ADC12bitResult(0)/(2300/WS2812_NUM);
            if(voiceGrade > WS2812_NUM) voiceGrade = WS2812_NUM;
            //随机颜色
            srand(Get_ADC12bitResult(0));
            randNum_G = ((rand()*rand())/256) * brightness / 100;

            srand(10*sin(Get_ADC12bitResult(0))+10);
            randNum_R = ((rand()*rand())/256) * brightness / 100;

            srand(10*cos(Get_ADC12bitResult(0))+10);
            randNum_B = ((rand()*rand())/256) * brightness / 100;

            for ( i = 0; i < WS2812_NUM; i++)
            {
                if(i<voiceGrade) 
                {
                    color_G[i] = randNum_G;
                    color_R[i] = randNum_R;
                    color_B[i] = randNum_B;
                }   
                else 
                {
                    color_G[i] = 0;
                    color_R[i] = 0;
                    color_B[i] = 0;
                }
            }
            //printf("G:%d R:%d B:%d\r\n",randNum_G,randNum_R,randNum_B);
			//printf("grade:%d  adc:%d\r\n",voiceGrade,Get_ADC12bitResult(0));	
            break;
        
        //烟花模式
        case firework_mode:
            if(firework_busy)
            {
                if(firework_index <= WS2812_NUM+(WS2812_NUM/3))
                {
                    for ( i = 0; i < WS2812_NUM; i++)
                    {
                        if(i>=firework_index && i<(firework_index+(WS2812_NUM/3)) )
                        {
                            color_G[i] = randNum_G;
                            color_R[i] = randNum_R;
                            color_B[i] = randNum_B;
                        }   
                        else 
                        {
                            color_G[i] = 0;
                            color_R[i] = 0;
                            color_B[i] = 0;
                        }
                    }
                    firework_index++;
                    Delay_ms(50);
                }
                else 
                {
                    firework_busy = 0;
                }
            }
            else 
            {
                voiceGrade = Get_ADC12bitResult(0)/(2300/WS2812_NUM);
                if(voiceGrade >= WS2812_NUM - (WS2812_NUM/3))
                {
                    firework_busy = 1;
                    firework_index = 0;
                    //随机颜色
                    srand(Get_ADC12bitResult(0));
                    randNum_G = ((rand()*rand())/256) * brightness / 100;

                    srand(10*sin(Get_ADC12bitResult(0))+10);
                    randNum_R = ((rand()*rand())/256) * brightness / 100;

                    srand(10*cos(Get_ADC12bitResult(0))+10);
                    randNum_B = ((rand()*rand())/256) * brightness / 100;

                    if(randNum_G == randNum_R == randNum_B == 0)    randNum_R = 255 * brightness / 100;
                }
            }
            break;


        case test_mode:

            break;
        default:
            break;
        }

        //显示
        WS2812_Show();
    }
}



void WS2812_setMode(enum WS2812_RunMode modeToSet)
{
    mode = modeToSet;
}
