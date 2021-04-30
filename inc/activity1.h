/**
 * @file activity1.h
 * @author Hemanth
 * @brief Header file for activity1
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY_1_H__
#define __ACTIVITY_1_H__

#define F_CPU 16000000UL 	

/* Defining PortD as led port*/
#define LED_PORT (PORTD)

/* Defining Led pin*/
#define LED_PIN  (PORTD2)   

/* Defining Port D0 as button*/
#define BUTTON_SENSOR  (PORTD0)   

/* Defining Port D1 for temperature sensor*/
#define TEMP_SENSOR  (PORTD1)   

 
#include <util/delay.h>
#include <avr/io.h>

/* Initializing peripherals*/
void peripheral_init(void);

/**
 * @brief Function for LED on
 * 
 */
void TurnLED_ON();

/**
 * @brief Function for LED off
 * 
 */
void TurnLED_OFF();

/**
 * @brief turn on led if both the inputs are high
 * 
 */
int activity1_LED(void);

#endif /* __ACTIVITY_1_H__ */
