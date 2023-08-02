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

enum WS2812_RunMode mode = close_mode;
unsigned char voiceGrade = 0;//音量等级
unsigned char brightness = 50;//亮度
unsigned char color_G[WS2812_NUM];
unsigned char color_R[WS2812_NUM];
unsigned char color_B[WS2812_NUM];
unsigned char i;
unsigned char randNum_G,randNum_R,randNum_B;

bit firework_busy = 0;
unsigned char firework_index = 0;

unsigned char warterfull_index = 1;

unsigned int gradient_index = 0;
unsigned char gradientPhase_G = 0;
unsigned char gradientPhase_R = 0;
unsigned char gradientPhase_B = 0;
unsigned char gradientColor_G = 0;
unsigned char gradientColor_R = 0;
unsigned char gradientColor_B = 0;

unsigned char srand_seed = 0;

unsigned char rainbowRoll_index = 0;
unsigned char temp_R ,temp_G,temp_B;

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
    while(1)
    {
        //随机颜色
        srand(Get_ADC12bitResult(0) + firework_index + warterfull_index + gradient_index + srand_seed);
        randNum_G = ((rand()*rand())%256) * brightness / 100;

        srand(100*sin(Get_ADC12bitResult(0) + firework_index + warterfull_index + gradient_index + srand_seed)+100);
        randNum_R = ((rand()*rand())%256) * brightness / 100;

        srand(100*cos(Get_ADC12bitResult(0) + firework_index + warterfull_index + gradient_index + srand_seed)+100);
        randNum_B = ((rand()*rand())%256) * brightness / 100;

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
                    if(randNum_G == randNum_R == randNum_B == 0)    randNum_R = 255 * brightness / 100;
                }
            }
            break;

        case warterfull_mode1:   
            for(i = 0; i<WS2812_NUM ;i++)
            {
                if(i<warterfull_index)
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
            warterfull_index++;
            if(warterfull_index > WS2812_NUM) warterfull_index = 1;
            Delay_ms(100);

            break;

        case warterfull_mode2:   
            for(i = 0; i<WS2812_NUM ;i++)
            {
                if(i<warterfull_index)
                {
                    color_G[i] = randNum_G;
                    color_R[i] = randNum_R;
                    color_B[i] = randNum_B;
                }
            }
            warterfull_index++;
            if(warterfull_index > WS2812_NUM) warterfull_index = 1;
            Delay_ms(100);

            break;

        case warterfull_mode3: 
            if(gradient_index == 0)//获取随机相位
            {
                gradientPhase_G = randNum_G;
                gradientPhase_R = randNum_R;
                gradientPhase_B = randNum_B;
            }
            gradientColor_G = (128*sin(0.0125*(gradient_index+gradientPhase_G))+128) * brightness/100;
            gradientColor_R = (128*sin(0.0125*(gradient_index+gradientPhase_R))+128) * brightness/100;
            gradientColor_B = (128*sin(0.0125*(gradient_index+gradientPhase_B))+128) * brightness/100;
            for(i = 0; i<WS2812_NUM ;i++)
            {
                if(i<warterfull_index)
                {
                    color_G[i] = gradientColor_G;
                    color_R[i] = gradientColor_R;
                    color_B[i] = gradientColor_B;
                }
                else
                {
                    color_G[i] = 0;
                    color_R[i] = 0;
                    color_B[i] = 0;
                }
            }
            gradient_index++;
            if(gradient_index == 500)
            {
                gradient_index = 1;
                warterfull_index++;
                if(warterfull_index > WS2812_NUM) 
                {
                    warterfull_index = 1;
                    gradient_index = 0;
                }
                
            }
            Delay_ms(1);
            break;

        case gradient_mode:
            if(gradient_index == 0)//获取随机相位
            {
                gradientPhase_G = randNum_G;
                gradientPhase_R = randNum_R;
                gradientPhase_B = randNum_B;
            }
            gradientColor_G = (128*sin(0.0125*(gradient_index+gradientPhase_G))+128) * brightness/100;
            gradientColor_R = (128*sin(0.0125*(gradient_index+gradientPhase_R))+128) * brightness/100;
            gradientColor_B = (128*sin(0.0125*(gradient_index+gradientPhase_B))+128) * brightness/100;
            for(i = 0; i<WS2812_NUM ;i++)
            {
                color_G[i] = gradientColor_G;
                color_R[i] = gradientColor_R;
                color_B[i] = gradientColor_B;
            }
            gradient_index++;
            if(gradient_index == 500)   gradient_index = 0;
            Delay_ms(1);

            
            break;

        case rainbow_mode:
            for(i = 0; i<WS2812_NUM ;i++)
            {
                if(i<(int)(WS2812_NUM/7))
                {
                    color_R[i] = 255 * brightness/100;
                    color_G[i] = (165 / (int)(WS2812_NUM / 7)) * i* brightness/100;
                    color_B[i] = 0;
                }
                else if (i<2*(int)(WS2812_NUM/7))
                {
                    color_R[i] = 255 * brightness/100;
                    color_G[i] = (165 + (((255-165) / (int)(WS2812_NUM / 7)) * (i - (WS2812_NUM/7))))* brightness/100;
                    color_B[i] = 0;
                }
                else if (i<3*(int)(WS2812_NUM/7))
                {
                    color_R[i] = (255 - ((255/(int)(WS2812_NUM / 7)) * (i - 2*(WS2812_NUM/7)))) * brightness/100;
                    color_G[i] = 255 * brightness/100;
                    color_B[i] = 0;
                }
                else if (i<4*(int)(WS2812_NUM/7))
                {
                    color_R[i] = 0;
                    color_G[i] = 255 * brightness/100;
                    color_B[i] = ( 255 / (int)(WS2812_NUM / 7) * (i - 3*(WS2812_NUM/7))) * brightness/100;
                }
                else if (i<5*(int)(WS2812_NUM/7))
                {
                    color_R[i] = 0;
                    color_G[i] = (255 - ((255/(int)(WS2812_NUM / 7)) * (i - 4*(WS2812_NUM/7)))) * brightness/100;
                    color_B[i] = 255 * brightness/100;
                } 
                else if (i<6*(int)(WS2812_NUM/7))
                {
                    color_R[i] = ( 139 / (int)(WS2812_NUM / 7) * (i - 5*(WS2812_NUM/7))) * brightness/100;
                    color_G[i] = 0;
                    color_B[i] = 255 * brightness/100;
                } 
                else if (i<WS2812_NUM)
                {
                    color_R[i] = (139 + (((255-139) / (WS2812_NUM - 6*(int)(WS2812_NUM / 7))) * (1+i - 6*(WS2812_NUM/7))))* brightness/100;
                    color_G[i] = 0;
                    color_B[i] = (255 - ((255/(WS2812_NUM - 6*(int)(WS2812_NUM / 7))) * (1+i - 6*(WS2812_NUM/7)))) * brightness/100;
                } 
                else
                {
                    color_R[i] = 0;
                    color_G[i] = 0;
                    color_B[i] = 0;
                }
            }
            break;
        case rainbowRoll_mode:
            if(rainbowRoll_index == 0)
            {
                for(i = 0; i<WS2812_NUM ;i++)
                {
                    if(i<(int)(WS2812_NUM/7))
                    {
                        color_R[i] = 255 * brightness/100;
                        color_G[i] = (165 / (int)(WS2812_NUM / 7)) * i* brightness/100;
                        color_B[i] = 0;
                    }
                    else if (i<2*(int)(WS2812_NUM/7))
                    {
                        color_R[i] = 255 * brightness/100;
                        color_G[i] = (165 + (((255-165) / (int)(WS2812_NUM / 7)) * (i - (WS2812_NUM/7))))* brightness/100;
                        color_B[i] = 0;
                    }
                    else if (i<3*(int)(WS2812_NUM/7))
                    {
                        color_R[i] = (255 - ((255/(int)(WS2812_NUM / 7)) * (i - 2*(WS2812_NUM/7)))) * brightness/100;
                        color_G[i] = 255 * brightness/100;
                        color_B[i] = 0;
                    }
                    else if (i<4*(int)(WS2812_NUM/7))
                    {
                        color_R[i] = 0;
                        color_G[i] = 255 * brightness/100;
                        color_B[i] = ( 255 / (int)(WS2812_NUM / 7) * (i - 3*(WS2812_NUM/7))) * brightness/100;
                    }
                    else if (i<5*(int)(WS2812_NUM/7))
                    {
                        color_R[i] = 0;
                        color_G[i] = (255 - ((255/(int)(WS2812_NUM / 7)) * (i - 4*(WS2812_NUM/7)))) * brightness/100;
                        color_B[i] = 255 * brightness/100;
                    } 
                    else if (i<6*(int)(WS2812_NUM/7))
                    {
                        color_R[i] = ( 139 / (int)(WS2812_NUM / 7) * (i - 5*(WS2812_NUM/7))) * brightness/100;
                        color_G[i] = 0;
                        color_B[i] = 255 * brightness/100;
                    } 
                    else if (i<WS2812_NUM)
                    {
                        color_R[i] = (139 + (((255-139) / (WS2812_NUM - 6*(int)(WS2812_NUM / 7))) * (1+i - 6*(WS2812_NUM/7))))* brightness/100;
                        color_G[i] = 0;
                        color_B[i] = (255 - ((255/(WS2812_NUM - 6*(int)(WS2812_NUM / 7))) * (1+i - 6*(WS2812_NUM/7)))) * brightness/100;
                    } 
                    else
                    {
                        color_R[i] = 0;
                        color_G[i] = 0;
                        color_B[i] = 0;
                    }
                }
                rainbowRoll_index++;
            }
            else 
            {
                temp_R = color_R[0];
                temp_G = color_G[0];
                temp_B = color_B[0];
                for(i = 1; i<WS2812_NUM ; i++)
                {
                    color_R[i-1] = color_R[i];
                    color_G[i-1] = color_G[i];
                    color_B[i-1] = color_B[i];
                }
                color_R[WS2812_NUM - 1] = temp_R;
                color_G[WS2812_NUM - 1] = temp_G;
                color_B[WS2812_NUM - 1] = temp_B;
            }
            Delay_ms(50);
            break;

        case test_mode:

            break;
        default:
            break;
        }

        if(mode != rainbowRoll_mode) rainbowRoll_index = 0;

        //显示
        WS2812_Show();
        srand_seed++;
    }
}



void WS2812_setMode(enum WS2812_RunMode modeToSet)
{
    mode = modeToSet;
}

void WS2812_setBrighness(unsigned char brightnessToSet)
{
    if(brightnessToSet<=100)
        brightness = brightnessToSet;
    else    brightness = 100;
}
