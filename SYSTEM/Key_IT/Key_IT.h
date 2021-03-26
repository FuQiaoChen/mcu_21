
#ifndef __KEY_IT__
#define __KEY_IT__

#ifdef __cplusplus
extern "C" {
#endif


#include "main.h"

#define KEY0       GPIO_PIN_4   //KEY0按键PE4
#define KEY1       GPIO_PIN_3   //KEY1按键PE3
#define KEY2       GPIO_PIN_2 	//KEY2按键PE2
#define WK_UP      GPIO_PIN_0   //WKUP按键PA0


void KEY_IT_Init(void);

void EXTI0_IRQHandler(void);    //外部中断0处理函数
void EXTI2_IRQHandler(void);	//外部中断2处理函数
void EXTI3_IRQHandler(void);	//外部中断3处理函数
void EXTI4_IRQHandler(void);	//外部中断4处理函数

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);  //所有外部中断的回调处理函数



#ifdef __cplusplus
}
#endif
#endif 


