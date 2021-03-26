
#ifndef __USART_H__
#define __USART_H__

#ifdef __cplusplus
extern "C" {
#endif


#include "main.h"


extern UART_HandleTypeDef huart1;


void USART1_Init(void);


void USART1_IRQHandler(void);

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);




#ifdef __cplusplus
}
#endif

#endif 
