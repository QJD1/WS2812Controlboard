#ifndef __STC32G_H_
#define __STC32G_H_

//此文件不参与编译
/////////////////////////////////////////////////
#include <intrins.h>

//包含本头文件后,不用另外再包含"REG51.H"

char         P0          ;
char        P00         ;
char        P01         ;
char        P02         ;
char        P03         ;
char        P04         ;
char        P05         ;
char        P06         ;
char        P07         ;
char         SP          ;
char         DPL         ;
char         DPH         ;
char         DPXL        ;
char         SPH         ;
char         PCON        ;
char        SMOD        ;
char        SMOD0       ;
char        LVDF        ;
char        POF         ;
char        GF1         ;
char        GF0         ;
char        PD          ;
char        IDL         ;
char         TCON        ;
char        TF1         ;
char        TR1         ;
char        TF0         ;
char        TR0         ;
char        IE1         ;
char        IT1         ;
char        IE0         ;
char        IT0         ;
char         TMOD        ;
char        T1_GATE     ;
char        T1_CT       ;
char        T1_M1       ;
char        T1_M0       ;
char        T0_GATE     ;
char        T0_CT       ;
char        T0_M1       ;
char        T0_M0       ;
char         TL0         ;
char         TL1         ;
char         TH0         ;
char         TH1         ;
char         AUXR        ;
char        T0x12       ;
char        T1x12       ;
char        S1M0x6      ;
char        T2R         ;
char        T2_CT       ;
char        T2x12       ;
char        EXTRAM      ;
char        S1BRT       ;
char         INTCLKO     ;
char        EX4         ;
char        EX3         ;
char        EX2         ;
char        T2CLKO      ;
char        T1CLKO      ;
char        T0CLKO      ;
char         P1          ;
char        P10         ;
char        P11         ;
char        P12         ;
char        P13         ;
char        P14         ;
char        P15         ;
char        P16         ;
char        P17         ;
char         P1M1        ;
char         P1M0        ;
char         P0M1        ;
char         P0M0        ;
char         P2M1        ;
char         P2M0        ;
char         AUXR2       ;
char        CANSEL      ;
char        CAN2EN      ;
char        CANEN       ;
char        LINEN       ;
char         SCON        ;
char        SM0         ;
char        SM1         ;
char        SM2         ;
char        REN         ;
char        TB8         ;
char        RB8         ;
char        TI          ;
char        RI          ;
char         SBUF        ;
char         S2CON       ;
char        S2SM0       ;
char        S2SM1       ;
char        S2SM2       ;
char        S2REN       ;
char        S2TB8       ;
char        S2RB8       ;
char        S2TI        ;
char        S2RI        ;
char         S2BUF       ;
char         IRCBAND     ;
char        USBCKS      ;
char        USBCKS2     ;
char        HIRCSEL1    ;
char        HIRCSEL0    ;
char         LIRTRIM     ;
char         IRTRIM      ;
char         P2          ;
char        P20         ;
char        P21         ;
char        P22         ;
char        P23         ;
char        P24         ;
char        P25         ;
char        P26         ;
char        P27         ;
char         BUS_SPEED   ;
char         P_SW1       ;
char        S1_S1       ;
char        S1_S0       ;
char        CAN_S1      ;
char        CAN_S0      ;
char        SPI_S1      ;
char        SPI_S0      ;
char        LIN_S1      ;
char        LIN_S0      ;
char         V33TRIM     ;
char         BGTRIM      ;
char         VRTRIM      ;
char         IE          ;
char        EA          ;
char        ELVD        ;
char        EADC        ;
char        ES          ;
char        ET1         ;
char        EX1         ;
char        ET0         ;
char        EX0         ;
char         SADDR       ;
char         WKTCL       ;
char         WKTCH       ;
char         S3CON       ;
char        S3SM0       ;
char        S3ST3       ;
char        S3SM2       ;
char        S3REN       ;
char        S3TB8       ;
char        S3RB8       ;
char        S3TI        ;
char        S3RI        ;
char         S3BUF       ;
char         TA          ;
char         IE2         ;
char        EUSB        ;
char        ET4         ;
char        ET3         ;
char        ES4         ;
char        ES3         ;
char        ET2         ;
char        ESPI        ;
char        ES2         ;
char         P3          ;
char        P30         ;
char        P31         ;
char        P32         ;
char        P33         ;
char        P34         ;
char        P35         ;
char        P36         ;
char        P37         ;
char         P3M1        ;
char         P3M0        ;
char         P4M1        ;
char         P4M0        ;
char         IP2         ;
char        PUSB        ;
char        PI2C        ;
char        PCMP        ;
char        PX4         ;
char        PPWMB       ;
char        PPWMA       ;
char        PSPI        ;
char        PS2         ;
char         IP2H        ;
char        PUSBH       ;
char        PI2CH       ;
char        PCMPH       ;
char        PX4H        ;
char        PPWMBH      ;
char        PPWMAH      ;
char        PSPIH       ;
char        PS2H        ;
char         IPH         ;
char        PLVDH       ;
char        PADCH       ;
char        PSH         ;
char        PT1H        ;
char        PX1H        ;
char        PT0H        ;
char        PX0H        ;
char         IP          ;
char        PLVD        ;
char        PADC        ;
char        PS          ;
char        PT1         ;
char        PX1         ;
char        PT0         ;
char        PX0         ;
char         SADEN       ;
char         P_SW2       ;
char        EAXFR       ;
char        I2C_S1      ;
char        I2C_S0      ;
char        CMPO_S      ;
char        S4_S        ;
char        S3_S        ;
char        S2_S        ;
char         P_SW3       ;
char        I2S_S1      ;
char        I2S_S0      ;
char        S2SPI_S1    ;
char        S2SPI_S0    ;
char        S1SPI_S1    ;
char        S1SPI_S0    ;
char        CAN2_S1     ;
char        CAN2_S0     ;
char         ADC_CONTR   ;
char        ADC_POWER   ;
char        ADC_START   ;
char        ADC_FLAG    ;
char        ADC_EPWMT   ;
char         ADC_RES     ;
char         ADC_RESL    ;
char         P4          ;
char        P40         ;
char        P41         ;
char        P42         ;
char        P43         ;
char        P44         ;
char        P45         ;
char        P46         ;
char        P47         ;
char         WDT_CONTR   ;
char        WDT_FLAG    ;
char        EN_WDT      ;
char        CLR_WDT     ;
char        IDL_WDT     ;
char         IAP_DATA    ;
char         IAP_ADDRH   ;
char         IAP_ADDRL   ;
char         IAP_CMD     ;
char         IAP_TRIG    ;
char         IAP_CONTR   ;
char        IAPEN       ;
char        SWBS        ;
char        SWRST       ;
char        CMD_FAIL    ;
char         P5          ;
char        P50         ;
char        P51         ;
char        P52         ;
char        P53         ;
char        P54         ;
char        P55         ;
char        P56         ;
char        P57         ;
char         P5M1        ;
char         P5M0        ;
char         P6M1        ;
char         P6M0        ;
char         SPSTAT      ;
char        SPIF        ;
char        WCOL        ;
char         SPCTL       ;
char        SSIG        ;
char        SPEN        ;
char        DORD        ;
char        MSTR        ;
char        CPOL        ;
char        CPHA        ;
char        SPR1        ;
char        SPR0        ;
char         SPDAT       ;
char         PSW         ;
char        CY          ;
char        AC          ;
char        F0          ;
char        RS1         ;
char        RS0         ;
char        OV          ;
char        P           ;
char         PSW1        ;
char         T4H         ;
char         T4L         ;
char         T3H         ;
char         T3L         ;
char         T2H         ;
char         T2L         ;
char         USBCLK      ;
char         T4T3M       ;
char        T4R         ;
char        T4_CT       ;
char        T4x12       ;
char        T4CLKO      ;
char        T3R         ;
char        T3_CT       ;
char        T3x12       ;
char        T3CLKO      ;
char         ADCCFG      ;
char        RESFMT      ;
char         IP3         ;
char        PI2S        ;
char        PRTC        ;
char        PS4         ;
char        PS3         ;
char         ACC         ;
char         P7M1        ;
char         P7M0        ;
char         DPS         ;
char         DPL1        ;
char         DPH1        ;
char         CMPCR1      ;
char        CMPEN       ;
char        CMPIF       ;
char        PIE         ;
char        NIE         ;
char        CMPOE       ;
char        CMPRES      ;
char         CMPCR2      ;
char        INVCMPO     ;
char        DISFLT      ;
char         P6          ;
char        P60         ;
char        P61         ;
char        P62         ;
char        P63         ;
char        P64         ;
char        P65         ;
char        P66         ;
char        P67         ;
char         WTST        ;
char         CKCON       ;
char         MXAX        ;
char         USBDAT      ;
char         DMAIR       ;
char         IP3H        ;
char        PI2SH       ;
char        PRTCH       ;
char        PS4H        ;
char        PS3H        ;
char         AUXINTIF    ;
char        INT4IF      ;
char        INT3IF      ;
char        INT2IF      ;
char        T4IF        ;
char        T3IF        ;
char        T2IF        ;
char         B           ;
char         CANICR      ;
char        PCAN2H      ;
char        CAN2IF      ;
char        CAN2IE      ;
char        PCAN2L      ;
char        PCANH       ;
char        CANIF       ;
char        CANIE       ;
char        PCANL       ;
char         USBCON      ;
char        ENUSB       ;
char        USBRST      ;
char        PS2M        ;
char        PUEN        ;
char        PDEN        ;
char        DFREC       ;
char        DP          ;
char        DM          ;
char         IAP_TPS     ;
char         IAP_ADDRE   ;
char         ICHECR      ;
char         P7          ;
char        P70         ;
char        P71         ;
char        P72         ;
char        P73         ;
char        P74         ;
char        P75         ;
char        P76         ;
char        P77         ;
char         LINICR      ;
char        PLINH       ;
char        LINIF       ;
char        LINIE       ;
char        PLINL       ;
char         LINAR       ;
char         LINDR       ;
char         USBADR      ;
char         S4CON       ;
char        S4SM0       ;
char        S4ST4       ;
char        S4SM2       ;
char        S4REN       ;
char        S4TB8       ;
char        S4RB8       ;
char        S4TI        ;
char        S4RI        ;
char         S4BUF       ;
char         RSTCFG      ;
char        ENLVR       ;
char        P54RST      ;


//如下特殊功能寄存器位于扩展RAM区域
//访问这些寄存器,需先将EAXFR设置为1,才可正常读写
//    EAXFR = 1;
//或者
//    P_SW2 |= 0x80;

/////////////////////////////////////////////////
//7E:FF00H-7E:FFFFH
/////////////////////////////////////////////////



/////////////////////////////////////////////////
//7E:FE00H-7E:FEFFH
/////////////////////////////////////////////////

#define     CLKSEL                  (*(unsigned char volatile far *)0x7efe00)
#define     CLKDIV                  (*(unsigned char volatile far *)0x7efe01)
#define     HIRCCR                  (*(unsigned char volatile far *)0x7efe02)
#define     XOSCCR                  (*(unsigned char volatile far *)0x7efe03)
#define     IRC32KCR                (*(unsigned char volatile far *)0x7efe04)
#define     MCLKOCR                 (*(unsigned char volatile far *)0x7efe05)
#define     IRCDB                   (*(unsigned char volatile far *)0x7efe06)
#define     IRC48MCR                (*(unsigned char volatile far *)0x7efe07)
#define     X32KCR                  (*(unsigned char volatile far *)0x7efe08)
#define     IRC48ATRIM              (*(unsigned char volatile far *)0x7efe09)
#define     IRC48BTRIM              (*(unsigned char volatile far *)0x7efe0a)
#define     HSCLKDIV                (*(unsigned char volatile far *)0x7efe0b)

#define     P0PU                    (*(unsigned char volatile far *)0x7efe10)
#define     P1PU                    (*(unsigned char volatile far *)0x7efe11)
#define     P2PU                    (*(unsigned char volatile far *)0x7efe12)
#define     P3PU                    (*(unsigned char volatile far *)0x7efe13)
#define     P4PU                    (*(unsigned char volatile far *)0x7efe14)
#define     P5PU                    (*(unsigned char volatile far *)0x7efe15)
#define     P6PU                    (*(unsigned char volatile far *)0x7efe16)
#define     P7PU                    (*(unsigned char volatile far *)0x7efe17)
#define     P0NCS                   (*(unsigned char volatile far *)0x7efe18)
#define     P1NCS                   (*(unsigned char volatile far *)0x7efe19)
#define     P2NCS                   (*(unsigned char volatile far *)0x7efe1a)
#define     P3NCS                   (*(unsigned char volatile far *)0x7efe1b)
#define     P4NCS                   (*(unsigned char volatile far *)0x7efe1c)
#define     P5NCS                   (*(unsigned char volatile far *)0x7efe1d)
#define     P6NCS                   (*(unsigned char volatile far *)0x7efe1e)
#define     P7NCS                   (*(unsigned char volatile far *)0x7efe1f)
#define     P0SR                    (*(unsigned char volatile far *)0x7efe20)
#define     P1SR                    (*(unsigned char volatile far *)0x7efe21)
#define     P2SR                    (*(unsigned char volatile far *)0x7efe22)
#define     P3SR                    (*(unsigned char volatile far *)0x7efe23)
#define     P4SR                    (*(unsigned char volatile far *)0x7efe24)
#define     P5SR                    (*(unsigned char volatile far *)0x7efe25)
#define     P6SR                    (*(unsigned char volatile far *)0x7efe26)
#define     P7SR                    (*(unsigned char volatile far *)0x7efe27)
#define     P0DR                    (*(unsigned char volatile far *)0x7efe28)
#define     P1DR                    (*(unsigned char volatile far *)0x7efe29)
#define     P2DR                    (*(unsigned char volatile far *)0x7efe2a)
#define     P3DR                    (*(unsigned char volatile far *)0x7efe2b)
#define     P4DR                    (*(unsigned char volatile far *)0x7efe2c)
#define     P5DR                    (*(unsigned char volatile far *)0x7efe2d)
#define     P6DR                    (*(unsigned char volatile far *)0x7efe2e)
#define     P7DR                    (*(unsigned char volatile far *)0x7efe2f)
#define     P0IE                    (*(unsigned char volatile far *)0x7efe30)
#define     P1IE                    (*(unsigned char volatile far *)0x7efe31)
#define     P2IE                    (*(unsigned char volatile far *)0x7efe32)
#define     P3IE                    (*(unsigned char volatile far *)0x7efe33)
#define     P4IE                    (*(unsigned char volatile far *)0x7efe34)
#define     P5IE                    (*(unsigned char volatile far *)0x7efe35)
#define     P6IE                    (*(unsigned char volatile far *)0x7efe36)
#define     P7IE                    (*(unsigned char volatile far *)0x7efe37)

#define     LCMIFCFG                (*(unsigned char volatile far *)0x7efe50)
#define     LCMIFCFG2               (*(unsigned char volatile far *)0x7efe51)
#define     LCMIFCR                 (*(unsigned char volatile far *)0x7efe52)
#define     LCMIFSTA                (*(unsigned char volatile far *)0x7efe53)
#define     LCMIFDATL               (*(unsigned char volatile far *)0x7efe54)
#define     LCMIFDATH               (*(unsigned char volatile far *)0x7efe55)

#define     RTCCR                   (*(unsigned char volatile far *)0x7efe60)
#define     RTCCFG                  (*(unsigned char volatile far *)0x7efe61)
#define     RTCIEN                  (*(unsigned char volatile far *)0x7efe62)
#define     RTCIF                   (*(unsigned char volatile far *)0x7efe63)
#define     ALAHOUR                 (*(unsigned char volatile far *)0x7efe64)
#define     ALAMIN                  (*(unsigned char volatile far *)0x7efe65)
#define     ALASEC                  (*(unsigned char volatile far *)0x7efe66)
#define     ALASSEC                 (*(unsigned char volatile far *)0x7efe67)
#define     INIYEAR                 (*(unsigned char volatile far *)0x7efe68)
#define     INIMONTH                (*(unsigned char volatile far *)0x7efe69)
#define     INIDAY                  (*(unsigned char volatile far *)0x7efe6a)
#define     INIHOUR                 (*(unsigned char volatile far *)0x7efe6b)
#define     INIMIN                  (*(unsigned char volatile far *)0x7efe6c)
#define     INISEC                  (*(unsigned char volatile far *)0x7efe6d)
#define     INISSEC                 (*(unsigned char volatile far *)0x7efe6e)
#define     YEAR                    (*(unsigned char volatile far *)0x7efe70)
#define     MONTH                   (*(unsigned char volatile far *)0x7efe71)
#define     DAY                     (*(unsigned char volatile far *)0x7efe72)
#define     HOUR                    (*(unsigned char volatile far *)0x7efe73)
#define     MIN                     (*(unsigned char volatile far *)0x7efe74)
#define     SEC                     (*(unsigned char volatile far *)0x7efe75)
#define     SSEC                    (*(unsigned char volatile far *)0x7efe76)

#define     I2CCFG                  (*(unsigned char volatile far *)0x7efe80)
#define     I2CMSCR                 (*(unsigned char volatile far *)0x7efe81)
#define     I2CMSST                 (*(unsigned char volatile far *)0x7efe82)
#define     I2CSLCR                 (*(unsigned char volatile far *)0x7efe83)
#define     I2CSLST                 (*(unsigned char volatile far *)0x7efe84)
#define     I2CSLADR                (*(unsigned char volatile far *)0x7efe85)
#define     I2CTXD                  (*(unsigned char volatile far *)0x7efe86)
#define     I2CRXD                  (*(unsigned char volatile far *)0x7efe87)
#define     I2CMSAUX                (*(unsigned char volatile far *)0x7efe88)

#define     SPFUNC                  (*(unsigned char volatile far *)0x7efe98)
#define     RSTFLAG                 (*(unsigned char volatile far *)0x7efe99)
#define     RSTCR0                  (*(unsigned char volatile far *)0x7efe9a)
#define     RSTCR1                  (*(unsigned char volatile far *)0x7efe9b)
#define     RSTCR2                  (*(unsigned char volatile far *)0x7efe9c)
#define     RSTCR3                  (*(unsigned char volatile far *)0x7efe9d)
#define     RSTCR4                  (*(unsigned char volatile far *)0x7efe9e)
#define     RSTCR5                  (*(unsigned char volatile far *)0x7efe9f)

#define     TM0PS                   (*(unsigned char volatile far *)0x7efea0)
#define     TM1PS                   (*(unsigned char volatile far *)0x7efea1)
#define     TM2PS                   (*(unsigned char volatile far *)0x7efea2)
#define     TM3PS                   (*(unsigned char volatile far *)0x7efea3)
#define     TM4PS                   (*(unsigned char volatile far *)0x7efea4)
#define     ADCTIM                  (*(unsigned char volatile far *)0x7efea8)
#define     T3T4PS                  (*(unsigned char volatile far *)0x7efeac)
#define     ADCEXCFG                (*(unsigned char volatile far *)0x7efead)
#define     CMPEXCFG                (*(unsigned char volatile far *)0x7efeae)

#define     PWMA_ETRPS              (*(unsigned char volatile far *)0x7efeb0)
#define     PWMA_ENO                (*(unsigned char volatile far *)0x7efeb1)
#define     PWMA_PS                 (*(unsigned char volatile far *)0x7efeb2)
#define     PWMA_IOAUX              (*(unsigned char volatile far *)0x7efeb3)
#define     PWMB_ETRPS              (*(unsigned char volatile far *)0x7efeb4)
#define     PWMB_ENO                (*(unsigned char volatile far *)0x7efeb5)
#define     PWMB_PS                 (*(unsigned char volatile far *)0x7efeb6)
#define     PWMB_IOAUX              (*(unsigned char volatile far *)0x7efeb7)
#define     CANAR                   (*(unsigned char volatile far *)0x7efebb)
#define     CANDR                   (*(unsigned char volatile far *)0x7efebc)
#define     PWMA_CR1                (*(unsigned char volatile far *)0x7efec0)
#define     PWMA_CR2                (*(unsigned char volatile far *)0x7efec1)
#define     PWMA_SMCR               (*(unsigned char volatile far *)0x7efec2)
#define     PWMA_ETR                (*(unsigned char volatile far *)0x7efec3)
#define     PWMA_IER                (*(unsigned char volatile far *)0x7efec4)
#define     PWMA_SR1                (*(unsigned char volatile far *)0x7efec5)
#define     PWMA_SR2                (*(unsigned char volatile far *)0x7efec6)
#define     PWMA_EGR                (*(unsigned char volatile far *)0x7efec7)
#define     PWMA_CCMR1              (*(unsigned char volatile far *)0x7efec8)
#define     PWMA_CCMR2              (*(unsigned char volatile far *)0x7efec9)
#define     PWMA_CCMR3              (*(unsigned char volatile far *)0x7efeca)
#define     PWMA_CCMR4              (*(unsigned char volatile far *)0x7efecb)
#define     PWMA_CCER1              (*(unsigned char volatile far *)0x7efecc)
#define     PWMA_CCER2              (*(unsigned char volatile far *)0x7efecd)
#define     PWMA_CNTRH              (*(unsigned char volatile far *)0x7efece)
#define     PWMA_CNTRL              (*(unsigned char volatile far *)0x7efecf)
#define     PWMA_PSCRH              (*(unsigned char volatile far *)0x7efed0)
#define     PWMA_PSCRL              (*(unsigned char volatile far *)0x7efed1)
#define     PWMA_ARRH               (*(unsigned char volatile far *)0x7efed2)
#define     PWMA_ARRL               (*(unsigned char volatile far *)0x7efed3)
#define     PWMA_RCR                (*(unsigned char volatile far *)0x7efed4)
#define     PWMA_CCR1H              (*(unsigned char volatile far *)0x7efed5)
#define     PWMA_CCR1L              (*(unsigned char volatile far *)0x7efed6)
#define     PWMA_CCR2H              (*(unsigned char volatile far *)0x7efed7)
#define     PWMA_CCR2L              (*(unsigned char volatile far *)0x7efed8)
#define     PWMA_CCR3H              (*(unsigned char volatile far *)0x7efed9)
#define     PWMA_CCR3L              (*(unsigned char volatile far *)0x7efeda)
#define     PWMA_CCR4H              (*(unsigned char volatile far *)0x7efedb)
#define     PWMA_CCR4L              (*(unsigned char volatile far *)0x7efedc)
#define     PWMA_BKR                (*(unsigned char volatile far *)0x7efedd)
#define     PWMA_DTR                (*(unsigned char volatile far *)0x7efede)
#define     PWMA_OISR               (*(unsigned char volatile far *)0x7efedf)
#define     PWMB_CR1                (*(unsigned char volatile far *)0x7efee0)
#define     PWMB_CR2                (*(unsigned char volatile far *)0x7efee1)
#define     PWMB_SMCR               (*(unsigned char volatile far *)0x7efee2)
#define     PWMB_ETR                (*(unsigned char volatile far *)0x7efee3)
#define     PWMB_IER                (*(unsigned char volatile far *)0x7efee4)
#define     PWMB_SR1                (*(unsigned char volatile far *)0x7efee5)
#define     PWMB_SR2                (*(unsigned char volatile far *)0x7efee6)
#define     PWMB_EGR                (*(unsigned char volatile far *)0x7efee7)
#define     PWMB_CCMR1              (*(unsigned char volatile far *)0x7efee8)
#define     PWMB_CCMR2              (*(unsigned char volatile far *)0x7efee9)
#define     PWMB_CCMR3              (*(unsigned char volatile far *)0x7efeea)
#define     PWMB_CCMR4              (*(unsigned char volatile far *)0x7efeeb)
#define     PWMB_CCER1              (*(unsigned char volatile far *)0x7efeec)
#define     PWMB_CCER2              (*(unsigned char volatile far *)0x7efeed)
#define     PWMB_CNTRH              (*(unsigned char volatile far *)0x7efeee)
#define     PWMB_CNTRL              (*(unsigned char volatile far *)0x7efeef)
#define     PWMB_PSCRH              (*(unsigned char volatile far *)0x7efef0)
#define     PWMB_PSCRL              (*(unsigned char volatile far *)0x7efef1)
#define     PWMB_ARRH               (*(unsigned char volatile far *)0x7efef2)
#define     PWMB_ARRL               (*(unsigned char volatile far *)0x7efef3)
#define     PWMB_RCR                (*(unsigned char volatile far *)0x7efef4)
#define     PWMB_CCR5H              (*(unsigned char volatile far *)0x7efef5)
#define     PWMB_CCR5L              (*(unsigned char volatile far *)0x7efef6)
#define     PWMB_CCR6H              (*(unsigned char volatile far *)0x7efef7)
#define     PWMB_CCR6L              (*(unsigned char volatile far *)0x7efef8)
#define     PWMB_CCR7H              (*(unsigned char volatile far *)0x7efef9)
#define     PWMB_CCR7L              (*(unsigned char volatile far *)0x7efefa)
#define     PWMB_CCR8H              (*(unsigned char volatile far *)0x7efefb)
#define     PWMB_CCR8L              (*(unsigned char volatile far *)0x7efefc)
#define     PWMB_BKR                (*(unsigned char volatile far *)0x7efefd)
#define     PWMB_DTR                (*(unsigned char volatile far *)0x7efefe)
#define     PWMB_OISR               (*(unsigned char volatile far *)0x7efeff)

typedef struct TAG_PWM_STRUCT
{
    unsigned char CR1;
    unsigned char CR2;
    unsigned char SMCR;
    unsigned char ETR;
    unsigned char IER;
    unsigned char SR1;
    unsigned char SR2;
    unsigned char EGR;
    unsigned char CCMR1;
    unsigned char CCMR2;
    unsigned char CCMR3;
    unsigned char CCMR4;
    unsigned char CCER1;
    unsigned char CCER2;
    unsigned char CNTRH;
    unsigned char CNTRL;
    unsigned char PSCRH;
    unsigned char PSCRL;
    unsigned char ARRH;
    unsigned char ARRL;
    unsigned char RCR;
    unsigned char CCR1H;
    unsigned char CCR1L;
    unsigned char CCR2H;
    unsigned char CCR2L;
    unsigned char CCR3H;
    unsigned char CCR3L;
    unsigned char CCR4H;
    unsigned char CCR4L;
    unsigned char BKR;
    unsigned char DTR;
    unsigned char OISR;
} PWM_STRUCT;

//#define     PWMA                    ((PWM_STRUCT volatile far *)0x7efec0)
//#define     PWMB                    ((PWM_STRUCT volatile far *)0x7efee0)

/////////////////////////////////////////////////
//7E:FD00H-7E:FDFFH
/////////////////////////////////////////////////

#define     P0INTE                  (*(unsigned char volatile far *)0x7efd00)
#define     P1INTE                  (*(unsigned char volatile far *)0x7efd01)
#define     P2INTE                  (*(unsigned char volatile far *)0x7efd02)
#define     P3INTE                  (*(unsigned char volatile far *)0x7efd03)
#define     P4INTE                  (*(unsigned char volatile far *)0x7efd04)
#define     P5INTE                  (*(unsigned char volatile far *)0x7efd05)
#define     P6INTE                  (*(unsigned char volatile far *)0x7efd06)
#define     P7INTE                  (*(unsigned char volatile far *)0x7efd07)
#define     P0INTF                  (*(unsigned char volatile far *)0x7efd10)
#define     P1INTF                  (*(unsigned char volatile far *)0x7efd11)
#define     P2INTF                  (*(unsigned char volatile far *)0x7efd12)
#define     P3INTF                  (*(unsigned char volatile far *)0x7efd13)
#define     P4INTF                  (*(unsigned char volatile far *)0x7efd14)
#define     P5INTF                  (*(unsigned char volatile far *)0x7efd15)
#define     P6INTF                  (*(unsigned char volatile far *)0x7efd16)
#define     P7INTF                  (*(unsigned char volatile far *)0x7efd17)
#define     P0IM0                   (*(unsigned char volatile far *)0x7efd20)
#define     P1IM0                   (*(unsigned char volatile far *)0x7efd21)
#define     P2IM0                   (*(unsigned char volatile far *)0x7efd22)
#define     P3IM0                   (*(unsigned char volatile far *)0x7efd23)
#define     P4IM0                   (*(unsigned char volatile far *)0x7efd24)
#define     P5IM0                   (*(unsigned char volatile far *)0x7efd25)
#define     P6IM0                   (*(unsigned char volatile far *)0x7efd26)
#define     P7IM0                   (*(unsigned char volatile far *)0x7efd27)
#define     P0IM1                   (*(unsigned char volatile far *)0x7efd30)
#define     P1IM1                   (*(unsigned char volatile far *)0x7efd31)
#define     P2IM1                   (*(unsigned char volatile far *)0x7efd32)
#define     P3IM1                   (*(unsigned char volatile far *)0x7efd33)
#define     P4IM1                   (*(unsigned char volatile far *)0x7efd34)
#define     P5IM1                   (*(unsigned char volatile far *)0x7efd35)
#define     P6IM1                   (*(unsigned char volatile far *)0x7efd36)
#define     P7IM1                   (*(unsigned char volatile far *)0x7efd37)
#define     P0WKUE                  (*(unsigned char volatile far *)0x7efd40)
#define     P1WKUE                  (*(unsigned char volatile far *)0x7efd41)
#define     P2WKUE                  (*(unsigned char volatile far *)0x7efd42)
#define     P3WKUE                  (*(unsigned char volatile far *)0x7efd43)
#define     P4WKUE                  (*(unsigned char volatile far *)0x7efd44)
#define     P5WKUE                  (*(unsigned char volatile far *)0x7efd45)
#define     P6WKUE                  (*(unsigned char volatile far *)0x7efd46)
#define     P7WKUE                  (*(unsigned char volatile far *)0x7efd47)

#define     PIN_IP                  (*(unsigned char volatile far *)0x7efd60)
#define     PIN_IPH                 (*(unsigned char volatile far *)0x7efd61)

#define     S2CFG                   (*(unsigned char volatile far *)0x7efdb4)
#define     S2ADDR                  (*(unsigned char volatile far *)0x7efdb5)
#define     S2ADEN                  (*(unsigned char volatile far *)0x7efdb6)
#define     USARTCR1                (*(unsigned char volatile far *)0x7efdc0)
#define     USARTCR2                (*(unsigned char volatile far *)0x7efdc1)
#define     USARTCR3                (*(unsigned char volatile far *)0x7efdc2)
#define     USARTCR4                (*(unsigned char volatile far *)0x7efdc3)
#define     USARTCR5                (*(unsigned char volatile far *)0x7efdc4)
#define     USARTGTR                (*(unsigned char volatile far *)0x7efdc5)
#define     USARTBRH                (*(unsigned char volatile far *)0x7efdc6)
#define     USARTBRL                (*(unsigned char volatile far *)0x7efdc7)
#define     USART2CR1               (*(unsigned char volatile far *)0x7efdc8)
#define     USART2CR2               (*(unsigned char volatile far *)0x7efdc9)
#define     USART2CR3               (*(unsigned char volatile far *)0x7efdca)
#define     USART2CR4               (*(unsigned char volatile far *)0x7efdcb)
#define     USART2CR5               (*(unsigned char volatile far *)0x7efdcc)
#define     USART2GTR               (*(unsigned char volatile far *)0x7efdcd)
#define     USART2BRH               (*(unsigned char volatile far *)0x7efdce)
#define     USART2BRL               (*(unsigned char volatile far *)0x7efdcf)

#define     CHIPID                  ( (unsigned char volatile far *)0x7efde0)

#define     CHIPID0                 (*(unsigned char volatile far *)0x7efde0)
#define     CHIPID1                 (*(unsigned char volatile far *)0x7efde1)
#define     CHIPID2                 (*(unsigned char volatile far *)0x7efde2)
#define     CHIPID3                 (*(unsigned char volatile far *)0x7efde3)
#define     CHIPID4                 (*(unsigned char volatile far *)0x7efde4)
#define     CHIPID5                 (*(unsigned char volatile far *)0x7efde5)
#define     CHIPID6                 (*(unsigned char volatile far *)0x7efde6)
#define     CHIPID7                 (*(unsigned char volatile far *)0x7efde7)
#define     CHIPID8                 (*(unsigned char volatile far *)0x7efde8)
#define     CHIPID9                 (*(unsigned char volatile far *)0x7efde9)
#define     CHIPID10                (*(unsigned char volatile far *)0x7efdea)
#define     CHIPID11                (*(unsigned char volatile far *)0x7efdeb)
#define     CHIPID12                (*(unsigned char volatile far *)0x7efdec)
#define     CHIPID13                (*(unsigned char volatile far *)0x7efded)
#define     CHIPID14                (*(unsigned char volatile far *)0x7efdee)
#define     CHIPID15                (*(unsigned char volatile far *)0x7efdef)
#define     CHIPID16                (*(unsigned char volatile far *)0x7efdf0)
#define     CHIPID17                (*(unsigned char volatile far *)0x7efdf1)
#define     CHIPID18                (*(unsigned char volatile far *)0x7efdf2)
#define     CHIPID19                (*(unsigned char volatile far *)0x7efdf3)
#define     CHIPID20                (*(unsigned char volatile far *)0x7efdf4)
#define     CHIPID21                (*(unsigned char volatile far *)0x7efdf5)
#define     CHIPID22                (*(unsigned char volatile far *)0x7efdf6)
#define     CHIPID23                (*(unsigned char volatile far *)0x7efdf7)
#define     CHIPID24                (*(unsigned char volatile far *)0x7efdf8)
#define     CHIPID25                (*(unsigned char volatile far *)0x7efdf9)
#define     CHIPID26                (*(unsigned char volatile far *)0x7efdfa)
#define     CHIPID27                (*(unsigned char volatile far *)0x7efdfb)
#define     CHIPID28                (*(unsigned char volatile far *)0x7efdfc)
#define     CHIPID29                (*(unsigned char volatile far *)0x7efdfd)
#define     CHIPID30                (*(unsigned char volatile far *)0x7efdfe)
#define     CHIPID31                (*(unsigned char volatile far *)0x7efdff)

/////////////////////////////////////////////////
//7E:FC00H-7E:FCFFH
/////////////////////////////////////////////////



/////////////////////////////////////////////////
//7E:FB00H-7E:FBFFH
/////////////////////////////////////////////////

#define     HSPWMA_CFG              (*(unsigned char volatile far *)0x7efbf0)
#define     HSPWMA_ADR              (*(unsigned char volatile far *)0x7efbf1)
#define     HSPWMA_DAT              (*(unsigned char volatile far *)0x7efbf2)

#define     HSPWMB_CFG              (*(unsigned char volatile far *)0x7efbf4)
#define     HSPWMB_ADR              (*(unsigned char volatile far *)0x7efbf5)
#define     HSPWMB_DAT              (*(unsigned char volatile far *)0x7efbf6)

#define     HSSPI_CFG               (*(unsigned char volatile far *)0x7efbf8)
#define     HSSPI_CFG2              (*(unsigned char volatile far *)0x7efbf9)
#define     HSSPI_STA               (*(unsigned char volatile far *)0x7efbfa)

//使用下面的宏,需先将EAXFR设置为1
//使用方法:
//      char val;
//
//      EAXFR = 1;                      //使能访问XFR
//      READ_HSPWMA(PWMA_CR1, val);     //异步读PWMA组寄存器
//      val |= 0x01;
//      WRITE_HSPWMA(PWMA_CR1, val);    //异步写PWMA组寄存器

#define     READ_HSPWMA(reg, dat)           \
            {                               \
                while (HSPWMA_ADR & 0x80);  \
                HSPWMA_ADR = ((char)&(reg)) | 0x80;  \
                while (HSPWMA_ADR & 0x80);  \
                (dat) = HSPWMA_DAT;         \
            }

#define     WRITE_HSPWMA(reg, dat)          \
            {                               \
                while (HSPWMA_ADR & 0x80);  \
                HSPWMA_DAT = (dat);         \
                HSPWMA_ADR = ((char)&(reg)) & 0x7f;  \
            }

#define     READ_HSPWMB(reg, dat)           \
            {                               \
                while (HSPWMB_ADR & 0x80);  \
                HSPWMB_ADR = ((char)&(reg)) | 0x80;  \
                while (HSPWMB_ADR & 0x80);  \
                (dat) = HSPWMB_DAT;         \
            }

#define     WRITE_HSPWMB(reg, dat)          \
            {                               \
                while (HSPWMB_ADR & 0x80);  \
                HSPWMB_DAT = (dat);         \
                HSPWMB_ADR = ((char)&(reg)) & 0x7f;  \
            }

/////////////////////////////////////////////////
//7E:FA00H-7E:FAFFH
/////////////////////////////////////////////////

#define     DMA_M2M_CFG             (*(unsigned char volatile far *)0x7efa00)
#define     DMA_M2M_CR              (*(unsigned char volatile far *)0x7efa01)
#define     DMA_M2M_STA             (*(unsigned char volatile far *)0x7efa02)
#define     DMA_M2M_AMT             (*(unsigned char volatile far *)0x7efa03)
#define     DMA_M2M_DONE            (*(unsigned char volatile far *)0x7efa04)
#define     DMA_M2M_TXAH            (*(unsigned char volatile far *)0x7efa05)
#define     DMA_M2M_TXAL            (*(unsigned char volatile far *)0x7efa06)
#define     DMA_M2M_RXAH            (*(unsigned char volatile far *)0x7efa07)
#define     DMA_M2M_RXAL            (*(unsigned char volatile far *)0x7efa08)

#define     DMA_ADC_CFG             (*(unsigned char volatile far *)0x7efa10)
#define     DMA_ADC_CR              (*(unsigned char volatile far *)0x7efa11)
#define     DMA_ADC_STA             (*(unsigned char volatile far *)0x7efa12)
#define     DMA_ADC_RXAH            (*(unsigned char volatile far *)0x7efa17)
#define     DMA_ADC_RXAL            (*(unsigned char volatile far *)0x7efa18)
#define     DMA_ADC_CFG2            (*(unsigned char volatile far *)0x7efa19)
#define     DMA_ADC_CHSW0           (*(unsigned char volatile far *)0x7efa1a)
#define     DMA_ADC_CHSW1           (*(unsigned char volatile far *)0x7efa1b)

#define     DMA_SPI_CFG             (*(unsigned char volatile far *)0x7efa20)
#define     DMA_SPI_CR              (*(unsigned char volatile far *)0x7efa21)
#define     DMA_SPI_STA             (*(unsigned char volatile far *)0x7efa22)
#define     DMA_SPI_AMT             (*(unsigned char volatile far *)0x7efa23)
#define     DMA_SPI_DONE            (*(unsigned char volatile far *)0x7efa24)
#define     DMA_SPI_TXAH            (*(unsigned char volatile far *)0x7efa25)
#define     DMA_SPI_TXAL            (*(unsigned char volatile far *)0x7efa26)
#define     DMA_SPI_RXAH            (*(unsigned char volatile far *)0x7efa27)
#define     DMA_SPI_RXAL            (*(unsigned char volatile far *)0x7efa28)
#define     DMA_SPI_CFG2            (*(unsigned char volatile far *)0x7efa29)

#define     DMA_UR1T_CFG            (*(unsigned char volatile far *)0x7efa30)
#define     DMA_UR1T_CR             (*(unsigned char volatile far *)0x7efa31)
#define     DMA_UR1T_STA            (*(unsigned char volatile far *)0x7efa32)
#define     DMA_UR1T_AMT            (*(unsigned char volatile far *)0x7efa33)
#define     DMA_UR1T_DONE           (*(unsigned char volatile far *)0x7efa34)
#define     DMA_UR1T_TXAH           (*(unsigned char volatile far *)0x7efa35)
#define     DMA_UR1T_TXAL           (*(unsigned char volatile far *)0x7efa36)
#define     DMA_UR1R_CFG            (*(unsigned char volatile far *)0x7efa38)
#define     DMA_UR1R_CR             (*(unsigned char volatile far *)0x7efa39)
#define     DMA_UR1R_STA            (*(unsigned char volatile far *)0x7efa3a)
#define     DMA_UR1R_AMT            (*(unsigned char volatile far *)0x7efa3b)
#define     DMA_UR1R_DONE           (*(unsigned char volatile far *)0x7efa3c)
#define     DMA_UR1R_RXAH           (*(unsigned char volatile far *)0x7efa3d)
#define     DMA_UR1R_RXAL           (*(unsigned char volatile far *)0x7efa3e)

#define     DMA_UR2T_CFG            (*(unsigned char volatile far *)0x7efa40)
#define     DMA_UR2T_CR             (*(unsigned char volatile far *)0x7efa41)
#define     DMA_UR2T_STA            (*(unsigned char volatile far *)0x7efa42)
#define     DMA_UR2T_AMT            (*(unsigned char volatile far *)0x7efa43)
#define     DMA_UR2T_DONE           (*(unsigned char volatile far *)0x7efa44)
#define     DMA_UR2T_TXAH           (*(unsigned char volatile far *)0x7efa45)
#define     DMA_UR2T_TXAL           (*(unsigned char volatile far *)0x7efa46)
#define     DMA_UR2R_CFG            (*(unsigned char volatile far *)0x7efa48)
#define     DMA_UR2R_CR             (*(unsigned char volatile far *)0x7efa49)
#define     DMA_UR2R_STA            (*(unsigned char volatile far *)0x7efa4a)
#define     DMA_UR2R_AMT            (*(unsigned char volatile far *)0x7efa4b)
#define     DMA_UR2R_DONE           (*(unsigned char volatile far *)0x7efa4c)
#define     DMA_UR2R_RXAH           (*(unsigned char volatile far *)0x7efa4d)
#define     DMA_UR2R_RXAL           (*(unsigned char volatile far *)0x7efa4e)

#define     DMA_UR3T_CFG            (*(unsigned char volatile far *)0x7efa50)
#define     DMA_UR3T_CR             (*(unsigned char volatile far *)0x7efa51)
#define     DMA_UR3T_STA            (*(unsigned char volatile far *)0x7efa52)
#define     DMA_UR3T_AMT            (*(unsigned char volatile far *)0x7efa53)
#define     DMA_UR3T_DONE           (*(unsigned char volatile far *)0x7efa54)
#define     DMA_UR3T_TXAH           (*(unsigned char volatile far *)0x7efa55)
#define     DMA_UR3T_TXAL           (*(unsigned char volatile far *)0x7efa56)
#define     DMA_UR3R_CFG            (*(unsigned char volatile far *)0x7efa58)
#define     DMA_UR3R_CR             (*(unsigned char volatile far *)0x7efa59)
#define     DMA_UR3R_STA            (*(unsigned char volatile far *)0x7efa5a)
#define     DMA_UR3R_AMT            (*(unsigned char volatile far *)0x7efa5b)
#define     DMA_UR3R_DONE           (*(unsigned char volatile far *)0x7efa5c)
#define     DMA_UR3R_RXAH           (*(unsigned char volatile far *)0x7efa5d)
#define     DMA_UR3R_RXAL           (*(unsigned char volatile far *)0x7efa5e)

#define     DMA_UR4T_CFG            (*(unsigned char volatile far *)0x7efa60)
#define     DMA_UR4T_CR             (*(unsigned char volatile far *)0x7efa61)
#define     DMA_UR4T_STA            (*(unsigned char volatile far *)0x7efa62)
#define     DMA_UR4T_AMT            (*(unsigned char volatile far *)0x7efa63)
#define     DMA_UR4T_DONE           (*(unsigned char volatile far *)0x7efa64)
#define     DMA_UR4T_TXAH           (*(unsigned char volatile far *)0x7efa65)
#define     DMA_UR4T_TXAL           (*(unsigned char volatile far *)0x7efa66)
#define     DMA_UR4R_CFG            (*(unsigned char volatile far *)0x7efa68)
#define     DMA_UR4R_CR             (*(unsigned char volatile far *)0x7efa69)
#define     DMA_UR4R_STA            (*(unsigned char volatile far *)0x7efa6a)
#define     DMA_UR4R_AMT            (*(unsigned char volatile far *)0x7efa6b)
#define     DMA_UR4R_DONE           (*(unsigned char volatile far *)0x7efa6c)
#define     DMA_UR4R_RXAH           (*(unsigned char volatile far *)0x7efa6d)
#define     DMA_UR4R_RXAL           (*(unsigned char volatile far *)0x7efa6e)

#define     DMA_LCM_CFG             (*(unsigned char volatile far *)0x7efa70)
#define     DMA_LCM_CR              (*(unsigned char volatile far *)0x7efa71)
#define     DMA_LCM_STA             (*(unsigned char volatile far *)0x7efa72)
#define     DMA_LCM_AMT             (*(unsigned char volatile far *)0x7efa73)
#define     DMA_LCM_DONE            (*(unsigned char volatile far *)0x7efa74)
#define     DMA_LCM_TXAH            (*(unsigned char volatile far *)0x7efa75)
#define     DMA_LCM_TXAL            (*(unsigned char volatile far *)0x7efa76)
#define     DMA_LCM_RXAH            (*(unsigned char volatile far *)0x7efa77)
#define     DMA_LCM_RXAL            (*(unsigned char volatile far *)0x7efa78)

#define     DMA_M2M_AMTH            (*(unsigned char volatile far *)0x7efa80)
#define     DMA_M2M_DONEH           (*(unsigned char volatile far *)0x7efa81)
#define     DMA_SPI_AMTH            (*(unsigned char volatile far *)0x7efa84)
#define     DMA_SPI_DONEH           (*(unsigned char volatile far *)0x7efa85)
#define     DMA_LCM_AMTH            (*(unsigned char volatile far *)0x7efa86)
#define     DMA_LCM_DONEH           (*(unsigned char volatile far *)0x7efa87)
#define     DMA_UR1T_AMTH           (*(unsigned char volatile far *)0x7efa88)
#define     DMA_UR1T_DONEH          (*(unsigned char volatile far *)0x7efa89)
#define     DMA_UR1R_AMTH           (*(unsigned char volatile far *)0x7efa8a)
#define     DMA_UR1R_DONEH          (*(unsigned char volatile far *)0x7efa8b)
#define     DMA_UR2T_AMTH           (*(unsigned char volatile far *)0x7efa8c)
#define     DMA_UR2T_DONEH          (*(unsigned char volatile far *)0x7efa8d)
#define     DMA_UR2R_AMTH           (*(unsigned char volatile far *)0x7efa8e)
#define     DMA_UR2R_DONEH          (*(unsigned char volatile far *)0x7efa8f)
#define     DMA_UR3T_AMTH           (*(unsigned char volatile far *)0x7efa90)
#define     DMA_UR3T_DONEH          (*(unsigned char volatile far *)0x7efa91)
#define     DMA_UR3R_AMTH           (*(unsigned char volatile far *)0x7efa92)
#define     DMA_UR3R_DONEH          (*(unsigned char volatile far *)0x7efa93)
#define     DMA_UR4T_AMTH           (*(unsigned char volatile far *)0x7efa94)
#define     DMA_UR4T_DONEH          (*(unsigned char volatile far *)0x7efa95)
#define     DMA_UR4R_AMTH           (*(unsigned char volatile far *)0x7efa96)
#define     DMA_UR4R_DONEH          (*(unsigned char volatile far *)0x7efa97)

#define     DMA_I2CT_CFG            (*(unsigned char volatile far *)0x7efa98)
#define     DMA_I2CT_CR             (*(unsigned char volatile far *)0x7efa99)
#define     DMA_I2CT_STA            (*(unsigned char volatile far *)0x7efa9a)
#define     DMA_I2CT_AMT            (*(unsigned char volatile far *)0x7efa9b)
#define     DMA_I2CT_DONE           (*(unsigned char volatile far *)0x7efa9c)
#define     DMA_I2CT_TXAH           (*(unsigned char volatile far *)0x7efa9d)
#define     DMA_I2CT_TXAL           (*(unsigned char volatile far *)0x7efa9e)
#define     DMA_I2CR_CFG            (*(unsigned char volatile far *)0x7efaa0)
#define     DMA_I2CR_CR             (*(unsigned char volatile far *)0x7efaa1)
#define     DMA_I2CR_STA            (*(unsigned char volatile far *)0x7efaa2)
#define     DMA_I2CR_AMT            (*(unsigned char volatile far *)0x7efaa3)
#define     DMA_I2CR_DONE           (*(unsigned char volatile far *)0x7efaa4)
#define     DMA_I2CR_RXAH           (*(unsigned char volatile far *)0x7efaa5)
#define     DMA_I2CR_RXAL           (*(unsigned char volatile far *)0x7efaa6)

#define     DMA_I2CT_AMTH           (*(unsigned char volatile far *)0x7efaa8)
#define     DMA_I2CT_DONEH          (*(unsigned char volatile far *)0x7efaa9)
#define     DMA_I2CR_AMTH           (*(unsigned char volatile far *)0x7efaaa)
#define     DMA_I2CR_DONEH          (*(unsigned char volatile far *)0x7efaab)

#define     DMA_I2C_CR              (*(unsigned char volatile far *)0x7efaad)
#define     DMA_I2C_ST1             (*(unsigned char volatile far *)0x7efaae)
#define     DMA_I2C_ST2             (*(unsigned char volatile far *)0x7efaaf)


/////////////////////////////////////////////////

//sfr       CANICR      =           0xf1;
//#define   CANAR                   (*(unsigned char volatile far *)0x7efebb)
//#define   CANDR                   (*(unsigned char volatile far *)0x7efebc)

//使用下面的宏,需先将EAXFR设置为1
//使用方法:
//      char dat;
//
//      EAXFR = 1;                  //使能访问XFR
//      dat = READ_CAN(RX_BUF0);    //读CAN寄存器
//      WRITE_CAN(TX_BUF0, 0x55);   //写CAN寄存器

#define     READ_CAN(reg)           (CANAR = (reg), CANDR)
#define     WRITE_CAN(reg, dat)     (CANAR = (reg), CANDR = (dat))

#define     MR                      0x00
#define     CMR                     0x01
#define     SR                      0x02
#define     ISR                     0x03
#define     IMR                     0x04
#define     RMC                     0x05
#define     BTR0                    0x06
#define     BTR1                    0x07
#define     TM0                     0x06
#define     TM1                     0x07
#define     TX_BUF0                 0x08
#define     TX_BUF1                 0x09
#define     TX_BUF2                 0x0a
#define     TX_BUF3                 0x0b
#define     RX_BUF0                 0x0c
#define     RX_BUF1                 0x0d
#define     RX_BUF2                 0x0e
#define     RX_BUF3                 0x0f
#define     ACR0                    0x10
#define     ACR1                    0x11
#define     ACR2                    0x12
#define     ACR3                    0x13
#define     AMR0                    0x14
#define     AMR1                    0x15
#define     AMR2                    0x16
#define     AMR3                    0x17
#define     ECC                     0x18
#define     RXERR                   0x19
#define     TXERR                   0x1a
#define     ALC                     0x1b

/////////////////////////////////////////////////
//LIN Control Regiter
/////////////////////////////////////////////////

//sfr       LINICR      =           0xf9;
//sfr       LINAR       =           0xfa;
//sfr       LINDR       =           0xfb;

//使用方法:
//      char dat;
//
//      dat = READ_LIN(LBUF);       //读CAN寄存器
//      WRITE_LIN(LBUF, 0x55);      //写CAN寄存器

#define     READ_LIN(reg)           (LINAR = (reg), LINDR)
#define     WRITE_LIN(reg, dat)     (LINAR = (reg), LINDR = (dat))

#define     LBUF                    0x00
#define     LSEL                    0x01
#define     LID                     0x02
#define     LER                     0x03
#define     LIE                     0x04
#define     LSR                     0x05
#define     LCR                     0x05
#define     DLL                     0x06
#define     DLH                     0x07
#define     HDRL                    0x08
#define     HDRH                    0x09
#define     HDP                     0x0A

/////////////////////////////////////////////////
//USB Control Regiter
/////////////////////////////////////////////////

//sfr       USBCLK      =           0xdc;
//sfr       USBDAT      =           0xec;
//sfr       USBCON      =           0xf4;
//sfr       USBADR      =           0xfc;

//使用方法:
//      char dat;
//
//      READ_USB(CSR0, dat);        //读USB寄存器
//      WRITE_USB(FADDR, 0x00);     //写USB寄存器

#define     READ_USB(reg, dat)          \
            {                           \
                while (USBADR & 0x80);  \
                USBADR = (reg) | 0x80;  \
                while (USBADR & 0x80);  \
                (dat) = USBDAT;         \
            }

#define     WRITE_USB(reg, dat)         \
            {                           \
                while (USBADR & 0x80);  \
                USBADR = (reg) & 0x7f;  \
                USBDAT = (dat);         \
            }

#define     USBBASE                 0
#define     FADDR                   (USBBASE + 0)
#define     UPDATE                  0x80
#define     POWER                   (USBBASE + 1)
#define     ISOUD                   0x80
#define     USBRST                  0x08
#define     USBRSU                  0x04
#define     USBSUS                  0x02
#define     ENSUS                   0x01
#define     INTRIN1                 (USBBASE + 2)
#define     EP5INIF                 0x20
#define     EP4INIF                 0x10
#define     EP3INIF                 0x08
#define     EP2INIF                 0x04
#define     EP1INIF                 0x02
#define     EP0IF                   0x01
#define     INTROUT1                (USBBASE + 4)
#define     EP5OUTIF                0x20
#define     EP4OUTIF                0x10
#define     EP3OUTIF                0x08
#define     EP2OUTIF                0x04
#define     EP1OUTIF                0x02
#define     INTRUSB                 (USBBASE + 6)
#define     SOFIF                   0x08
#define     RSTIF                   0x04
#define     RSUIF                   0x02
#define     SUSIF                   0x01
#define     INTRIN1E                (USBBASE + 7)
#define     EP5INIE                 0x20
#define     EP4INIE                 0x10
#define     EP3INIE                 0x08
#define     EP2INIE                 0x04
#define     EP1INIE                 0x02
#define     EP0IE                   0x01
#define     INTROUT1E               (USBBASE + 9)
#define     EP5OUTIE                0x20
#define     EP4OUTIE                0x10
#define     EP3OUTIE                0x08
#define     EP2OUTIE                0x04
#define     EP1OUTIE                0x02
#define     INTRUSBE                (USBBASE + 11)
#define     SOFIE                   0x08
#define     RSTIE                   0x04
#define     RSUIE                   0x02
#define     SUSIE                   0x01
#define     FRAME1                  (USBBASE + 12)
#define     FRAME2                  (USBBASE + 13)
#define     INDEX                   (USBBASE + 14)
#define     INMAXP                  (USBBASE + 16)
#define     CSR0                    (USBBASE + 17)
#define     SSUEND                  0x80
#define     SOPRDY                  0x40
#define     SDSTL                   0x20
#define     SUEND                   0x10
#define     DATEND                  0x08
#define     STSTL                   0x04
#define     IPRDY                   0x02
#define     OPRDY                   0x01
#define     INCSR1                  (USBBASE + 17)
#define     INCLRDT                 0x40
#define     INSTSTL                 0x20
#define     INSDSTL                 0x10
#define     INFLUSH                 0x08
#define     INUNDRUN                0x04
#define     INFIFONE                0x02
#define     INIPRDY                 0x01
#define     INCSR2                  (USBBASE + 18)
#define     INAUTOSET               0x80
#define     INISO                   0x40
#define     INMODEIN                0x20
#define     INMODEOUT               0x00
#define     INENDMA                 0x10
#define     INFCDT                  0x08
#define     OUTMAXP                 (USBBASE + 19)
#define     OUTCSR1                 (USBBASE + 20)
#define     OUTCLRDT                0x80
#define     OUTSTSTL                0x40
#define     OUTSDSTL                0x20
#define     OUTFLUSH                0x10
#define     OUTDATERR               0x08
#define     OUTOVRRUN               0x04
#define     OUTFIFOFUL              0x02
#define     OUTOPRDY                0x01
#define     OUTCSR2                 (USBBASE + 21)
#define     OUTAUTOCLR              0x80
#define     OUTISO                  0x40
#define     OUTENDMA                0x20
#define     OUTDMAMD                0x10
#define     COUNT0                  (USBBASE + 22)
#define     OUTCOUNT1               (USBBASE + 22)
#define     OUTCOUNT2               (USBBASE + 23)
#define     FIFO0                   (USBBASE + 32)
#define     FIFO1                   (USBBASE + 33)
#define     FIFO2                   (USBBASE + 34)
#define     FIFO3                   (USBBASE + 35)
#define     FIFO4                   (USBBASE + 36)
#define     FIFO5                   (USBBASE + 37)
#define     UTRKCTL                 (USBBASE + 48)
#define     UTRKSTS                 (USBBASE + 49)

/////////////////////////////////////////////////
//Interrupt Vector
/////////////////////////////////////////////////

#define     INT0_VECTOR             0       //0003H
#define     TMR0_VECTOR             1       //000BH
#define     INT1_VECTOR             2       //0013H
#define     TMR1_VECTOR             3       //001BH
#define     UART1_VECTOR            4       //0023H
#define     ADC_VECTOR              5       //002BH
#define     LVD_VECTOR              6       //0033H
//#define   PCA_VECTOR              7       //003BH
#define     UART2_VECTOR            8       //0043H
#define     SPI_VECTOR              9       //004BH
#define     INT2_VECTOR             10      //0053H
#define     INT3_VECTOR             11      //005BH
#define     TMR2_VECTOR             12      //0063H
#define     USER_VECTOR             13      //006BH
#define     BRK_VECTOR              14      //0073H
#define     ICEP_VECTOR             15      //007BH
#define     INT4_VECTOR             16      //0083H
#define     UART3_VECTOR            17      //008BH
#define     UART4_VECTOR            18      //0093H
#define     TMR3_VECTOR             19      //009BH
#define     TMR4_VECTOR             20      //00A3H
#define     CMP_VECTOR              21      //00ABH
//#define   PWM_VECTOR              22      //00B3H
//#define   PWMFD_VECTOR            23      //00BBH
#define     I2C_VECTOR              24      //00C3H
#define     USB_VECTOR              25      //00CBH
#define     PWMA_VECTOR             26      //00D3H
#define     PWMB_VECTOR             27      //00DBH
#define     CAN1_VECTOR             28      //00E3H
#define     CAN2_VECTOR             29      //00EBH
#define     LIN_VECTOR              30      //00F3H

#define     RTC_VECTOR              36      //0123H
#define     P0INT_VECTOR            37      //012BH
#define     P1INT_VECTOR            38      //0133H
#define     P2INT_VECTOR            39      //013BH
#define     P3INT_VECTOR            40      //0143H
#define     P4INT_VECTOR            41      //014BH
#define     P5INT_VECTOR            42      //0153H
#define     P6INT_VECTOR            43      //015BH
#define     P7INT_VECTOR            44      //0163H
#define     DMA_M2M_VECTOR          47      //017BH
#define     DMA_ADC_VECTOR          48      //0183H
#define     DMA_SPI_VECTOR          49      //018BH
#define     DMA_UR1T_VECTOR         50      //0193H
#define     DMA_UR1R_VECTOR         51      //019BH
#define     DMA_UR2T_VECTOR         52      //01A3H
#define     DMA_UR2R_VECTOR         53      //01ABH
#define     DMA_UR3T_VECTOR         54      //01B3H
#define     DMA_UR3R_VECTOR         55      //01BBH
#define     DMA_UR4T_VECTOR         56      //01C3H
#define     DMA_UR4R_VECTOR         57      //01CBH
#define     DMA_LCM_VECTOR          58      //01D3H
#define     LCM_VECTOR              59      //01DBH
#define     DMA_I2CT_VECTOR         60      //01E3H
#define     DMA_I2CR_VECTOR         61      //01EBH
#define     I2S_VECTOR              62      //01F3H
#define     DMA_I2ST_VECTOR         63      //01FBH
#define     DMA_I2SR_VECTOR         64      //0203H

/////////////////////////////////////////////////
#define	EAXSFR()		EAXFR = 1		/* MOVX A,@DPTR/MOVX @DPTR,A指令的操作对象为扩展SFR(XSFR) */
#define	EAXRAM()		EAXFR = 0		/* MOVX A,@DPTR/MOVX @DPTR,A指令的操作对象为扩展RAM(XRAM) */


/////////////////////////////////////////////////
#define NOP1()  _nop_()
#define NOP2()  NOP1(),NOP1()
#define NOP3()  NOP2(),NOP1()
#define NOP4()  NOP3(),NOP1()
#define NOP5()  NOP4(),NOP1()
#define NOP6()  NOP5(),NOP1()
#define NOP7()  NOP6(),NOP1()
#define NOP8()  NOP7(),NOP1()
#define NOP9()  NOP8(),NOP1()
#define NOP10() NOP9(),NOP1()
#define NOP11() NOP10(),NOP1()
#define NOP12() NOP11(),NOP1()
#define NOP13() NOP12(),NOP1()
#define NOP14() NOP13(),NOP1()
#define NOP15() NOP14(),NOP1()
#define NOP16() NOP15(),NOP1()
#define NOP17() NOP16(),NOP1()
#define NOP18() NOP17(),NOP1()
#define NOP19() NOP18(),NOP1()
#define NOP20() NOP19(),NOP1()
#define NOP21() NOP20(),NOP1()
#define NOP22() NOP21(),NOP1()
#define NOP23() NOP22(),NOP1()
#define NOP24() NOP23(),NOP1()
#define NOP25() NOP24(),NOP1()
#define NOP26() NOP25(),NOP1()
#define NOP27() NOP26(),NOP1()
#define NOP28() NOP27(),NOP1()
#define NOP29() NOP28(),NOP1()
#define NOP30() NOP29(),NOP1()
#define NOP31() NOP30(),NOP1()
#define NOP32() NOP31(),NOP1()
#define NOP33() NOP32(),NOP1()
#define NOP34() NOP33(),NOP1()
#define NOP35() NOP34(),NOP1()
#define NOP36() NOP35(),NOP1()
#define NOP37() NOP36(),NOP1()
#define NOP38() NOP37(),NOP1()
#define NOP39() NOP38(),NOP1()
#define NOP40() NOP39(),NOP1()
#define NOP(N)  NOP##N()


#endif

