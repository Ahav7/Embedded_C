#ifndef __ACTIVITY_4_H__
#define __ACTIVITY_4_H__
/**
 * @file activity4.h
 * @author Hemanth
 * @brief Header file for activity4
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#define F_CPU 16000000UL 

// BAud Rate
#define USART_BAUDRATE 9600 


/* UBRR value */
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) 
 
#include <util/delay.h>
#include <avr/io.h>

void USARTInit();

/**
 * @brief Reading data
 * 
 */
int USARTRead();

/**
 * @brief Writing data to view in serial monitor
 * 
 */
void activity4_USARTWrite(uint16_t temp);

#endif /* __ACTIVITY_4_H__ */
