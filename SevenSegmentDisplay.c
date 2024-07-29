#include<stdint.h>
#include"inc\tm4c123gh6pm.h"
void delayMs(int n);
void sho(unsigned char str);
unsigned char a[5]={0x66,0xF2,0xDA,0x60,0x00};
unsigned int i, T = 500;

int main(void)
{
	SYSCTL_RCGCGPIO_R |= 0x24;
	GPIO_PORTF_DIR_R = 0x0F;
	GPIO_PORTF_DEN_R = 0x0F;
	GPIO_PORTC_DIR_R = 0x10;
	GPIO_PORTC_DEN_R = 0x10;
	
	while(1)
	{
		sho(a[3]);
		sho(a[2]);
		sho(a[1]);
		sho(a[0]);
		sho(a[4]);
		delayMs(T);
		sho(a[4]);
		sho(a[4]);
		sho(a[4]);
		sho(a[4]);
		sho(a[4]);
		delayMs(T);
	}
}

void sho(unsigned char str)
{
	unsigned char j=0,check;
	GPIO_PORTC_DATA_R = 0x00;
	for(j=0;j<=7;j++)
	{
		GPIO_PORTF_DATA_R = 0x00;
		check = (str & (1<<j));
		if(check)
		{
			GPIO_PORTF_DATA_R |= 0x04;
		}
		else
		{
			GPIO_PORTF_DATA_R |= 0x00;
		}
		GPIO_PORTF_DATA_R = 0x08;
	}
	GPIO_PORTC_DATA_R = 0x10;
	
	
}

void delayMs(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2300;j++)
		{}
	}
}