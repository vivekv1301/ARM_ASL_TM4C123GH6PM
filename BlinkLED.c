// Program for BlinkLED / RGB
// To be executed on RED PCB of TM4C123GH6PM

#include<stdint.h>
#include "inc\tm4c123gh6pm.h"
void delay(int n);
int main(void)
{
	SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R5;
	GPIO_PORTF_DIR_R = 0x0E;
	GPIO_PORTF_DEN_R = 0x0E;
	
	while(1)
	{
		GPIO_PORTF_DATA_R = 0x02;
		delay(50);
		GPIO_PORTF_DATA_R = 0x04;
		delay(50);
		GPIO_PORTF_DATA_R = 0x08;
		delay(50);
	}
	
}

void delay(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<4180;j++)
		{}
	}
}