/**
 * @file activity1.c
 * @author Hemanth
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity1.h"


void peripheral_init(void)
{	
	
	DDRD |= (1<<PD2);
	// set bit for LED
	
    DDRD &= ~(1<<PD0);
	//clear bit
	
    PORTD |= (1<<PD0);
	//set bit for SeatSwitch
	
    DDRD &= ~(1<<PD1);
	//clear bit
	
    PORTD |= (1<<PD1);
	//set bit for HeaterSwitch
}

/* Function for led high*/
void TurnLED_ON(){
    LED_PORT |= (1<<LED_PIN); 
}

/* Function for led low */
void TurnLED_OFF(){
    LED_PORT &= ~(1<<LED_PIN);
}

int act1=0;
int activity1_LED(void)
{
       peripheral_init();
	// both inputs are high
        if(!(PIND&(1<<BUTTON_SENSOR )) && !(PIND&(1<<TEMP_SENSOR))) 
        { 
            act1=1;
        }
	/* if both inputs are not high*/
        else  
        {
            act1=0;
        }
    return act1;
}
