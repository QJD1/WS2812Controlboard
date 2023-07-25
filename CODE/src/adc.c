#include "adc.h"

#define	ADC_SPEED	15		/* 0~15, ADC转换时间(CPU时钟数) = (n+1)*32  ADCCFG */
#define	RES_FMT		(1<<5)	/* ADC结果格式 0: 左对齐, ADC_RES: D11 D10 D9 D8 D7 D6 D5 D4, ADC_RESL: D3 D2 D1 D0 0 0 0 0 */
							/* ADCCFG      1: 右对齐, ADC_RES: 0 0 0 0 D11 D10 D9 D8, ADC_RESL: D7 D6 D5 D4 D3 D2 D1 D0 */
//ADC初始化
void ADC_Init()
{
    ADCTIM = 0x3f;  //设置通道选择时间、保持时间、采样时间
	ADCCFG = RES_FMT + ADC_SPEED;
	//ADC模块电源打开后，需等待1ms，MCU内部ADC电源稳定后再进行AD转换
	ADC_CONTR = 0x80 + 0;	//ADC on + channel
}


//========================================================================
// 函数: u16 Get_ADC12bitResult(u8 channel))	//channel = 0~15
// 描述: 查询法读一次ADC结果.
// 参数: channel: 选择要转换的ADC, 0~15.
// 返回: 12位ADC结果.
// 版本: V1.0, 2016-4-28
//========================================================================
unsigned int Get_ADC12bitResult(unsigned char channel)	//channel = 0~15
{
	ADC_RES = 0;
	ADC_RESL = 0;

    ADC_CONTR = (ADC_CONTR & 0xf0) | channel; //设置ADC转换通道
    ADC_START = 1;//启动ADC转换
    _nop_();
	_nop_();
	_nop_();
	_nop_();
    while(ADC_FLAG == 0);   //wait for ADC finish
    ADC_FLAG = 0;     //清除ADC结束标志
	return (((u16)ADC_RES << 8) | ADC_RESL);
}

//#define		SUM_LENGTH	16	/* 平均值采样次数 最大值16 */

/***********************************
查询方式做一次ADC, chn为通道号, chn=0~7对应P1.0~P1.7, chn=8~14对应P0.0~P0.6, chn=15对应BandGap电压.
***********************************/
// void ADC_convert(u8 chn)
// {
// 	u16	j;
// 	u8	k;		//平均值滤波时使用

// 	Get_ADC12bitResult(chn);		//参数i=0~15,查询方式做一次ADC, 切换通道后第一次转换结果丢弃. 避免采样电容的残存电压影响.
// 	Get_ADC12bitResult(chn);		//参数i=0~15,查询方式做一次ADC, 切换通道后第二次转换结果丢弃. 避免采样电容的残存电压影响.
// 	for(k=0, j=0; k<SUM_LENGTH; k++)	j += Get_ADC12bitResult(chn);	// 采样累加和, 参数0~15,查询方式做一次ADC, 返回值就是结果
// 	j = j / SUM_LENGTH;		// 求平均

// 	if(chn == 15)	printf("Bandgap=%04d  ",j);	//内基准 1.19V
// 	else		//ADC0~ADC14
// 	{
// 		printf("ADC%02d=%04d  ",chn,j);
// 	}
// }