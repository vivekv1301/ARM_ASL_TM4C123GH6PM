/* Program to excute Buzzer program 
	To be executed on the green PCB of TM4C123GH6PM 
	Input Buzzer state == OFF
	Output to be seen when Switch interrupt to be HIGH */

#include <stdint.h>
#include "inc\tm4c123gh6pm.h"

void delayMs(int n);

int main (void)
{ 
	  unsigned int value;
    /* enable clock to GPIOB at clock gating control register */
      SYSCTL_RCGCGPIO_R |= 0x22;//PB
	  GPIO_PORTF_DIR_R |= 0x00; /* set PORTF pin 4 as input and pin 1,2,3 as output(LED) pin */ 
		GPIO_PORTF_DEN_R |= 0x10; /* set PORTF pins 4 as digital pins */
		GPIO_PORTF_PUR_R = 0x10;   /* enable pull up for pin 4 */
    
    GPIO_PORTB_DIR_R = 0x08;   //PB/3 /* enable the GPIO pins for the /PB3/ as output */
	  GPIO_PORTB_DEN_R = 0x08;   /* enable the GPIO pins for digital function */
    
  while(1)
    {
			  value = GPIO_PORTF_DATA_R; /* read data from PORTF pin 4 */
        if(value==0x10)
            GPIO_PORTB_DATA_R = 0x00; /* Buzzer ON */
			  else
					GPIO_PORTB_DATA_R = 0x08; 
      			
}
		
}
void delayMs(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<4160;j++)
		{}
	}
}
