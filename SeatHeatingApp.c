/**
 * @file SeatHeatingApp.c
 * @author
 * @brief Seat Heating Application to maintain Temperature of seat
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

int main(void)
{
    uint16_t temp;
    
    while(1)
    {
	    /* Check if both switches are high*/
        if(activity1_LED()==1) 
        {
            /*if switches are high then led is set to be high*/
            TurnLED_ON();
	    /* Get the ADC value*/
            temp=activity2_GetADC();
	    /* PWM based on the temperature*/
            activity3_PWM(temp); 
	   /* Using UART protocol to print temperature on srial monitor*/
            activity4_USARTWrite(temp);
            

        }
	    /* If both the switches are not high led is in low state*/
        else  
        {
            TurnLED_OFF();
		    _delay_ms(1000);
        }

    }
    return 0;
}
