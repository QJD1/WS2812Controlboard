/**
 * @author �����
 * @brief ����Ŀ����ws2812���ư������
 * @date 2023/7/24
 * **/


#include "main.h"

/******************** ������ **************************/
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
    WTST = 0;  //���ó���ָ����ʱ��������ֵΪ0�ɽ�CPUִ��ָ����ٶ�����Ϊ���
    EAXFR = 1; //��չ�Ĵ���(XFR)����ʹ��
    CKCON = 0; //��߷���XRAM�ٶ�

    //IO������
    P1M0 = 0x00; P1M1 = 0x01; 
    P3M0 = 0x00; P3M1 = 0x00;
    P5M0 = 0x06; P5M1 = 0x00; 

    P51 = 0;

    ADC_Init();
    UART1_config();    // ѡ������, 2: ʹ��Timer2��������, ����ֵ: ʹ��Timer1��������.

    EA = 1;             //����ȫ���ж�
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