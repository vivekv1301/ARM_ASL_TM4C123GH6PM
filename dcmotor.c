#include<stdint.h>
#include"inc\tm4c123gh6pm.h"
void delayMs(int n);
int main(void)
{
	int i;
	SYSCTL_RCGCGPIO_R |= 0x10;
	GPIO_PORTE_DIR_R = 0x1E;
	GPIO_PORTE_DEN_R = 0x1E;
	
	while(1)
	{
		GPIO_PORTE_DATA_R = 0x10;
		delayMs(20);
		GPIO_PORTE_DATA_R = 0x00;
		delayMs(10);
	}
}

void delayMs(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<3200;j++)
		{}
	}
}