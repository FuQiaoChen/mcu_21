#include "Key_IT.h"
#include "delay.h"
#include "Led_Beep.h"
#include "usart.h"


void KEY_IT_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pins : PE2 PE3 PE4 */
  GPIO_InitStruct.Pin = GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pin : PA0 */
  GPIO_InitStruct.Pin = GPIO_PIN_0;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI0_IRQn, 1, 0);
  HAL_NVIC_EnableIRQ(EXTI0_IRQn);

  HAL_NVIC_SetPriority(EXTI2_IRQn, 10, 0);
  HAL_NVIC_EnableIRQ(EXTI2_IRQn);

  HAL_NVIC_SetPriority(EXTI3_IRQn, 10, 0);
  HAL_NVIC_EnableIRQ(EXTI3_IRQn);

  HAL_NVIC_SetPriority(EXTI4_IRQn, 10, 0);
  HAL_NVIC_EnableIRQ(EXTI4_IRQn);

}



/* This function handles EXTI line0 interrupt.*/
void EXTI0_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_0);
}

/* This function handles EXTI line2 interrupt.*/
void EXTI2_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_2);
}

/* This function handles EXTI line3 interrupt.*/
void EXTI3_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_3);
}

/* This function handles EXTI line4 interrupt.*/
void EXTI4_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_4);
}




void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)    //所有按键外部中断的回调处理函数
{
	if(GPIO_Pin==WK_UP)		//	WK_UP键处理代码区
	{
		Delay_ms(100);
		if(GPIO_Pin==WK_UP)
		{
			HAL_UART_Transmit(&huart1, "你按的是WAKEUP键\n\r",0x12U,500);
			LCD_ShowString(90,240,300,24,24,"THE WAKEUP IS PRESSED");	      				
			LED0_TOG;
		}
	}
	if(GPIO_Pin==KEY0)		//	KEY0键处理代码区
	{
	    Delay_ms(100);
		if(GPIO_Pin==KEY0)
		{
			HAL_UART_Transmit(&huart1, "你按的是KEY0键\n\r",0x10U,500);
			LCD_ShowString(90,240,300,24,24,"THE KEY0 IS PRESSED");
			LED1_TOG;
		}
	}
	if(GPIO_Pin==KEY1)	   //	KEY1键处理代码区
	{
	    Delay_ms(100);
		if(GPIO_Pin==KEY1)
		{
			HAL_UART_Transmit(&huart1, "你按的是KEY1键\n\r",0x10U,500);
			LCD_ShowString(90,240,300,24,24,"THE KEY1 IS PRESSED");
			LED0_ON;
			LED1_ON;
			Delay_ms(500);
			LED0_OFF;
			LED1_OFF			
		}
	}
	if(GPIO_Pin==KEY2)	   //	KEY2键处理代码区
	{
	    Delay_ms(100);
		if(GPIO_Pin==KEY2)
		{
			HAL_UART_Transmit(&huart1, "你按的是KEY2键\n\r",0x10U,500);
			LCD_ShowString(90,240,300,24,24,"THE KEY2 IS PRESSED");
			BEEP_ON;
			Delay_ms(500);
			BEEP_OFF;
		}
	}
	printf("执行完毕\n\r");
	LCD_ShowString(90,280,300,24,24,"2021/03/22");	 
}
