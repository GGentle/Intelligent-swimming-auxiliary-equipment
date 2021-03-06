#ifndef __USART2_H
#define __USART2_H
#include "sys.h"
#include "stdio.h"	  
 
 #define TIME 200
 
#define USART_REC_LEN  			200  	//定义最大接收字节数 200
#define EN_USART2_RX 			1		//使能（1）/禁止（0）串口2接收
	  	
extern u8  USART2_RX_BUF[USART_REC_LEN]; //接收缓冲,最大USART_REC_LEN个字节.末字节为换行符 
extern u16 USART2_RX_STA;         		//接收状态标记	

void uart2_init(u32 pclk2,u32 bound);	//uart2_init(72,19200);
void send_msg();
void send_gps_tmp();

#endif	   
















