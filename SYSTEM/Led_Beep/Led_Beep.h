#ifndef __LED_BEEP_H__
#define __LED_BEEP_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"


#define LED0_ON  HAL_GPIO_WritePin (GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);
#define LED0_OFF HAL_GPIO_WritePin (GPIOF, GPIO_PIN_9, GPIO_PIN_SET);
#define LED0_TOG HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_9);

#define LED1_ON  HAL_GPIO_WritePin (GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
#define LED1_OFF HAL_GPIO_WritePin (GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
#define LED1_TOG HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_10);

#define BEEP_ON  HAL_GPIO_WritePin (GPIOF, GPIO_PIN_8, GPIO_PIN_SET);
#define BEEP_OFF HAL_GPIO_WritePin (GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);
#define BEEP_TOG HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_8);


void Led_Beep_Init(void);



#ifdef __cplusplus
}
#endif
#endif 

/**********************END OF FILE*************/
