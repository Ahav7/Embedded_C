#ifndef __ACTIVITY_1_H__
#define __ACTIVITY_1_H__
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

#define F_CPU 16000000UL 	

/** LED Port Number */
#define LED_PORT (PORTD)   

/**< LED Pin Number */
#define LED_PIN  (PORTD2)   

/* Button*/
#define BUTTON_SENSOR  (PORTD0)  

/*Temperature sensor*/
#define TEMP_SENSOR  (PORTD1)

#include <util/delay.h>
#include <avr/io.h>


/**
 * @brief peripheral initialize
 * 
 */
void peripheral_init(void);

/**
 * @brief Function to turn LED on
 * 
 */

void TurnLED_ON();

/**
 * @brief Function to turn LED off
 * 
 */
void TurnLED_OFF();

int activity1_LED(void);

#endif 
