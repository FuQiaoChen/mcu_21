#include "sys.h"
#include "delay.h"
#include "Led_Beep.h"
#include "Key_IT.h"
#include "usart.h"
#include "lcd.h"
#include "stdio.h"

int main(void)
{
//	u8 key;
	
//	u8 len;	
//	u16 times=0;
    


	
	     
    HAL_Init();                    	 			//初始化HAL库    
    
	Stm32_Clock_Init(168,4,2,7);   				//设置时钟,168Mhz

    Delay_Init(168);	                        //初始化延时函数
	
	USART1_Init();                          //初始化USART
		
	Led_Beep_Init();                            //初始化LED灯及BEEP轰鸣器
	
	KEY_IT_Init();                              //初始化按键
	
 	LCD_Init();           			           //初始化LCD FSMC接口
	LCD_Clear(WHITE);
	POINT_COLOR=BLACK;	 

	while(1)
	{

		LCD_ShowString(30,40,400,32,32,"Explorer STM32F4");	
		LCD_ShowString(90,120,300,24,24,"TFTLCD TEST");
 		LCD_ShowString(90,160,300,24,24,"LCD_ID:5510");		      					 
		LCD_ShowString(90,200,300,24,24,"2021/03/19");	      					 

		LED1_TOG;	 
		Delay_ms(500);	



		
		
		
//      if(USART_RX_STA&0x8000)
//		{					   
//			len=USART_RX_STA&0x3fff;//得到此次接收到的数据长度
//			printf("\r\n您发送的消息为:\r\n");
//			HAL_UART_Transmit(&UART1_Handler,(uint8_t*)USART_RX_BUF,len,1000);	//发送接收到的数据
//			while(__HAL_UART_GET_FLAG(&UART1_Handler,UART_FLAG_TC)!=SET);		//等待发送结束
//			printf("\r\n\r\n");//插入换行
//			USART_RX_STA=0;
//		}
//		else
//		{
//			times++;
//			if(times%5000==0)
//			{
//				printf("\r\nALIENTEK 探索者STM32F407开发板 串口实验\r\n");
//				printf("正点原子@ALIENTEK\r\n\r\n\r\n");
//			}
//			if(times%1000==0)printf("请输入数据,以回车键结束\r\n");  
//			if(times%100==0)LED1_TOG;//闪烁LED,提示系统正在运行.
//			Delay_ms(10);   
//		} 
//		
//		
		
/*		
        key=Key_Scan(0);            //按键扫描
		switch(key)
		{				 
			case WKUP_PRES:			//控制LED0,LED1互斥点亮
				LED1_TOG;
				LED0_TOG;
				break;
			case KEY2_PRES:			//控制LED0翻转
				LED0_TOG;
				break;
			case KEY1_PRES:			//控制LED1翻转	 
				LED1_TOG;
				break;
			case KEY0_PRES:			//同时控制LED0,LED1翻转 
				LED1_TOG;
				LED0_TOG;
				break;
		}
        Delay_ms(10);		
*/		
		
		
//	BEEP_ON;
//	Delay_us(500);
//	BEEP_OFF;
//	Delay_ms(1000);	  
//	LED0_TOG;  	
	
	
	}
}
