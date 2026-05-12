#include <stdint.h>
#define RCC_AHB1ENR (*(volatile uint32_t*)0x40023830)
#define GPIOD_MODER (*(volatile uint32_t*)0x40020C00)
#define GPIOD_ODR (*(volatile uint32_t*)0x40020C14)

int main(void)
{
	RCC_AHB1ENR |=(1<<3);
	GPIOD_MODER &=~(1<<28);
	GPIOD_MODER |=(1<<28);


	while(1)
	{
       GPIOD_ODR |=(1<<14);
   for(int i=0;i<3000;i++);
	   GPIOD_ODR &= ~(1<<14);
   for(int i=0;i<3000;i++);

	}
}
