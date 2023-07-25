#include "adc.h"

#define	ADC_SPEED	15		/* 0~15, ADCת��ʱ��(CPUʱ����) = (n+1)*32  ADCCFG */
#define	RES_FMT		(1<<5)	/* ADC�����ʽ 0: �����, ADC_RES: D11 D10 D9 D8 D7 D6 D5 D4, ADC_RESL: D3 D2 D1 D0 0 0 0 0 */
							/* ADCCFG      1: �Ҷ���, ADC_RES: 0 0 0 0 D11 D10 D9 D8, ADC_RESL: D7 D6 D5 D4 D3 D2 D1 D0 */
//ADC��ʼ��
void ADC_Init()
{
    ADCTIM = 0x3f;  //����ͨ��ѡ��ʱ�䡢����ʱ�䡢����ʱ��
	ADCCFG = RES_FMT + ADC_SPEED;
	//ADCģ���Դ�򿪺���ȴ�1ms��MCU�ڲ�ADC��Դ�ȶ����ٽ���ADת��
	ADC_CONTR = 0x80 + 0;	//ADC on + channel
}


//========================================================================
// ����: u16 Get_ADC12bitResult(u8 channel))	//channel = 0~15
// ����: ��ѯ����һ��ADC���.
// ����: channel: ѡ��Ҫת����ADC, 0~15.
// ����: 12λADC���.
// �汾: V1.0, 2016-4-28
//========================================================================
unsigned int Get_ADC12bitResult(unsigned char channel)	//channel = 0~15
{
	ADC_RES = 0;
	ADC_RESL = 0;

    ADC_CONTR = (ADC_CONTR & 0xf0) | channel; //����ADCת��ͨ��
    ADC_START = 1;//����ADCת��
    _nop_();
	_nop_();
	_nop_();
	_nop_();
    while(ADC_FLAG == 0);   //wait for ADC finish
    ADC_FLAG = 0;     //���ADC������־
	return (((u16)ADC_RES << 8) | ADC_RESL);
}

//#define		SUM_LENGTH	16	/* ƽ��ֵ�������� ���ֵ16 */

/***********************************
��ѯ��ʽ��һ��ADC, chnΪͨ����, chn=0~7��ӦP1.0~P1.7, chn=8~14��ӦP0.0~P0.6, chn=15��ӦBandGap��ѹ.
***********************************/
// void ADC_convert(u8 chn)
// {
// 	u16	j;
// 	u8	k;		//ƽ��ֵ�˲�ʱʹ��

// 	Get_ADC12bitResult(chn);		//����i=0~15,��ѯ��ʽ��һ��ADC, �л�ͨ�����һ��ת���������. ����������ݵĲд��ѹӰ��.
// 	Get_ADC12bitResult(chn);		//����i=0~15,��ѯ��ʽ��һ��ADC, �л�ͨ����ڶ���ת���������. ����������ݵĲд��ѹӰ��.
// 	for(k=0, j=0; k<SUM_LENGTH; k++)	j += Get_ADC12bitResult(chn);	// �����ۼӺ�, ����0~15,��ѯ��ʽ��һ��ADC, ����ֵ���ǽ��
// 	j = j / SUM_LENGTH;		// ��ƽ��

// 	if(chn == 15)	printf("Bandgap=%04d  ",j);	//�ڻ�׼ 1.19V
// 	else		//ADC0~ADC14
// 	{
// 		printf("ADC%02d=%04d  ",chn,j);
// 	}
// }