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
	WTST = 0;  //���ó���ָ����ʱ��������ֵΪ0�ɽ�CPUִ��ָ����ٶ�����Ϊ���
    EAXFR = 1; //��չ�Ĵ���(XFR)����ʹ��
    CKCON = 0; //��߷���XRAM�ٶ�
	GPIO_Init();
}

void GPIO_Init()
{
    P3M0 = 0x03; P3M1 = 0x00; 
	
}

//========================================================================
// ����: void  delay_ms(unsigned char ms)
// ����: ��ʱ������
// ����: ms,Ҫ��ʱ��ms��, ����ֻ֧��1~255ms. �Զ���Ӧ��ʱ��.
// ����: none.
// �汾: VER1.0
// ����: 2013-4-1
// ��ע: 
//========================================================================
void  delay_ms(u8 ms)
{
     u16 i;
     do{
          i = MAIN_Fosc / 6000;
          while(--i);
     }while(--ms);
}