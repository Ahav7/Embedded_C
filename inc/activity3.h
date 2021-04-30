/**
 * @file activity3.h
 * @author 
 * @brief Header file for activity3
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__

/* PWM for 20%*/
#define PWM_20_PERCENT (205)

/* PWM for 40% */
#define PWM_40_PERCENT (410) 

/* PWM for 70% */
#define PWM_70_PERCENT (717) 

/* PWM for 95% */
#define PWM_95_PERCENT (973) 


#include <util/delay.h>
#include <avr/io.h>


/**
 * @brief Initialize Timer1 registers 
 * 
 */
void InitTimer();

/* Duty cycle according to ADC input*/
void activity3_PWM(uint16_t temp);

#endif /* __ACTIVITY_3_H__ */
