# Day 01 – LED Test

## Objective
Understand basic GPIO configuration on the STM32H563ZIT6 and control the onboard LD1 green user LED using bare-metal register programming.

## Hardware
- NUCLEO-H563ZI
- STM32H563ZIT6
- USB cable
- Onboard LD1 green user LED

## Concepts Learned
- RCC peripheral clock
- AHB2ENR
- GPIOB
- GPIO MODER
- GPIO ODR
- Bit manipulation
- GPIO output configuration

## Working Principle
RCC → AHB2ENR → GPIOB Clock → MODER → PB0 Output → ODR → LD1

## Result
Successfully controlled the onboard LD1 LED on the NUCLEO-H563ZI.

## Next Step
Implement LED blinking using a software delay.
