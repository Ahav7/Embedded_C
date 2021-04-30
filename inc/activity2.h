
/**
 * @file activity2.h
 * @author Hemanth
 * @brief Header file for activity2
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY_2_H__
#define __ACTIVITY_2_H__
 
#include <util/delay.h>
#include <avr/io.h>

/**
 * @brief Initialize the  ADC setup
 * 
 */
void InitADC();

/**
 * 
 * @return uint16_t ADC value
 */
uint16_t ReadADC(uint8_t ch);

/**
 * @brief Return the ADC value to main function
 * 
 * @return uint16_t The ADC value
 */
uint16_t activity2_GetADC(void);

#endif /* __ACTIVITY_2_H__ */
