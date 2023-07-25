#ifndef __ADC_H_
#define __ADC_H_

#include "main.h"

void ADC_Init();
unsigned int	Get_ADC12bitResult(unsigned char channel);	//channel = 0~15

#endif
