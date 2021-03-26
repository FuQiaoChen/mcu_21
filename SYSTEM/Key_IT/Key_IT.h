
#ifndef __KEY_IT__
#define __KEY_IT__

#ifdef __cplusplus
extern "C" {
#endif


#include "main.h"

#define KEY0       GPIO_PIN_4   //KEY0����PE4
#define KEY1       GPIO_PIN_3   //KEY1����PE3
#define KEY2       GPIO_PIN_2 	//KEY2����PE2
#define WK_UP      GPIO_PIN_0   //WKUP����PA0


void KEY_IT_Init(void);

void EXTI0_IRQHandler(void);    //�ⲿ�ж�0������
void EXTI2_IRQHandler(void);	//�ⲿ�ж�2������
void EXTI3_IRQHandler(void);	//�ⲿ�ж�3������
void EXTI4_IRQHandler(void);	//�ⲿ�ж�4������

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);  //�����ⲿ�жϵĻص�������



#ifdef __cplusplus
}
#endif
#endif 


