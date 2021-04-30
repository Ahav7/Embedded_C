#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__
/**
 * @file activity3.h
 * @author Hemanth
 * @brief Header file for activity3
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Macro Definitions
 */
// PWM 20%
#define PWM_20_PERCENT (205) 

//PWM 40%
#define PWM_40_PERCENT (410) 

//PWM 70%
#define PWM_70_PERCENT (717) 

//PWM 95%
#define PWM_95_PERCENT (973) 


#include <util/delay.h>
#include <avr/io.h>


void InitTimer();

/**
 * @brief Duty cyvle for input adc
 * 
 */
void activity3_PWM(uint16_t temp);

#endif /* __ACTIVITY_3_H__ */
