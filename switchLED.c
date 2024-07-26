// Program for Switch LED
// To be executed in RED PCB

#include<stdint.h>
#include"inc\tm4c123gh6pm.h"
int main()
{
	unsigned int value;
	SYSCTL_RCGCGPIO_R |= 0x20;
	GPIO_PORTF_DIR_R = 0x0E;
	GPIO_PORTF_DEN_R = 0x12;
	GPIO_PORTF_PUR_R = 0x10;
	
	while(1)
	{
		value = GPIO_PORTF_DATA_R;
		value = ~value;
		value = value >> 1;
		GPIO_PORTF_DATA_R = value;
	}
}

/* Default State == LED OFF
	On pressing Switch button == LED ON */