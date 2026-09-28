#include "stm32h5xx.h"

#define LED_PIN   (1U << 0)   // PB0

void delay(void)
{
    for (volatile uint32_t i = 0; i < 1000000; i++)
    {
        __NOP();
    }
}

int main(void)
{
    /* 1. Enable GPIOB clock */
    RCC->AHB2ENR |= (1U << 1);

    /* 2. Configure PB0 as output */
    GPIOB->MODER &= ~(3U << 0);
    GPIOB->MODER |=  (1U << 0);

    while (1)
    {
        /* LED ON */
        GPIOB->ODR |= LED_PIN;

        delay();

        /* LED OFF */
        GPIOB->ODR &= ~LED_PIN;

        delay();
    }
}
