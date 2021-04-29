  
/**
 * @file activity1.c
 * @author Hemanth
 * @brief blink an led 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity1.h"

/* Peripheral state*/
void peripheral_init(void)
{	
    /* PD2 high for Led	
    DDRD |= (1<<PD2); 
    /* Clearing the PD0
    DDRD &= ~(1<<PD0);
    /*Making High for seatbutton*/
    PORTD |= (1<<PD0); 
    /* Clearing the PD1
    DDRD &= ~(1<<PD1); 
    /*Making High for heater*/
    PORTD |= (1<<PD1); 
}

void TurnLED_ON(){
    LED_PORT |= (1<<LED_PIN); 
}

void TurnLED_OFF(){
    LED_PORT &= ~(1<<LED_PIN);
}

int act1=0;
int activity1_LED(void)
{
       peripheral_init();
	/* if both the buttons are high the led is high*/
        if(!(PIND&(1<<BUTTON_SENSOR )) && !(PIND&(1<<TEMP_SENSOR))) 
        { 
            act1=1;
        }
	/*rest cases led is low*/
        else 
        {
            act1=0;
        }
    return act1;
}
