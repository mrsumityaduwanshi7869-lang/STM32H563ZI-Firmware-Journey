#include "stm32h5xx.h"

#define GPIOAEN  (1U<<0)
#define LED      (1U<<5)
int main(void){
	/*Enable clock for GPIOA*/
	RCC->AHB1ENR |= GPIOAEN;

	/*Set the direction of PA5(LED)*/
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &= ~(1U<<11);

	while(1){
        /*LED ON*/
		GPIOA->ODR |= LED;
	}
}
