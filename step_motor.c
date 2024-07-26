#include<stdint.h>
#include "inc\tm4c123gh6pm.h"
#define N 1
void delayMs(int n);

int main(void)
{
	SYSCTL_RCGCGPIO_R |= 0x10;
	GPIO_PORTE_DIR_R = 0x1E;
	GPIO_PORTE_DEN_R = 0x1E;
	
	while(1)
	{
		GPIO_PORTE_DATA_R = 0x10;
		delayMs(N);
		GPIO_PORTE_DATA_R = 0x08;
		delayMs(N);
		GPIO_PORTE_DATA_R = 0x04;
		delayMs(N);
		GPIO_PORTE_DATA_R = 0x02;
		delayMs(N);
	}
}

void delayMs(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<8160;j++)
		{
		
		}
	}
		
}