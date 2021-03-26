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
    


	
	     
    HAL_Init();                    	 			//��ʼ��HAL��    
    
	Stm32_Clock_Init(168,4,2,7);   				//����ʱ��,168Mhz

    Delay_Init(168);	                        //��ʼ����ʱ����
	
	USART1_Init();                          //��ʼ��USART
		
	Led_Beep_Init();                            //��ʼ��LED�Ƽ�BEEP������
	
	KEY_IT_Init();                              //��ʼ������
	
 	LCD_Init();           			           //��ʼ��LCD FSMC�ӿ�
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
//			len=USART_RX_STA&0x3fff;//�õ��˴ν��յ������ݳ���
//			printf("\r\n�����͵���ϢΪ:\r\n");
//			HAL_UART_Transmit(&UART1_Handler,(uint8_t*)USART_RX_BUF,len,1000);	//���ͽ��յ�������
//			while(__HAL_UART_GET_FLAG(&UART1_Handler,UART_FLAG_TC)!=SET);		//�ȴ����ͽ���
//			printf("\r\n\r\n");//���뻻��
//			USART_RX_STA=0;
//		}
//		else
//		{
//			times++;
//			if(times%5000==0)
//			{
//				printf("\r\nALIENTEK ̽����STM32F407������ ����ʵ��\r\n");
//				printf("����ԭ��@ALIENTEK\r\n\r\n\r\n");
//			}
//			if(times%1000==0)printf("����������,�Իس�������\r\n");  
//			if(times%100==0)LED1_TOG;//��˸LED,��ʾϵͳ��������.
//			Delay_ms(10);   
//		} 
//		
//		
		
/*		
        key=Key_Scan(0);            //����ɨ��
		switch(key)
		{				 
			case WKUP_PRES:			//����LED0,LED1�������
				LED1_TOG;
				LED0_TOG;
				break;
			case KEY2_PRES:			//����LED0��ת
				LED0_TOG;
				break;
			case KEY1_PRES:			//����LED1��ת	 
				LED1_TOG;
				break;
			case KEY0_PRES:			//ͬʱ����LED0,LED1��ת 
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
