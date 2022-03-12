/**
 * @file main.c
 * @author Aashish Kalra (PS No: 99007918)
 *  @author Om Gautaum (PS No: 99007921)
 * @author Vanka Vinaya Kumar (PS No. : 99007917)
 * @author Karthick D (Ps No : 99007919)
 * @brief 
 * @version 0.1
 * @date 2022-03-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "MyStm32f407xx.h"
#define S 1  // Defining set pin to high
#define R 0  // Defining set pin to Low

void GPIO_Config() // GPIO_Config implemented by Vinay (PS No. 99007917)
{
	GPIO_Handle_t GpioLed, GPIOBtn;

	// Initialize Led at Pin number 12 as output and push pull button
	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	// Initialize Led at Pin number 13 as output and push pull button
	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	// Initialize Led at Pin number 14 as output and push pull button
	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);
	
	// Initialize Led at Pin number 15 as output and push pull button
	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	// Initialize Button at Pin number 12 as output and push pull button
	GPIOBtn.pGPIOx = GPIOA;
	GPIOBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	GPIOBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GPIOBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GPIOBtn.GPIO_PinConfig.GPIO_PinOPType = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&GPIOBtn);
}
 int main()  // Main function Implemented by Om Gautam  (PS No. 99007921)
{
	GPIO_Config(); // Function call to initialize led and button pins 
	while(1)  // Forever loop 
	{
		int res;  
		res = button_count(); // Button count implemented by Aashish Kalra (PS No. 99007918)
		volatile int enc1 = encryption(res);	// Encryption function implemented by Karthick  (PS No. 99007919)

		if(enc1 == 2) // Turn On all LED's
		{	
			GPIO_Config();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, S);  // Pin Number 12 set to HIGH
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, S);  // Pin Number 13 set to HIGH
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, S);  // Pin Number 14 set to HIGH
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, S);  // Pin Number 15 set to HIGH
			delay(350);
			res = 0;
			button_count();
		}
		else if(enc1 == 4) // Turn off all LED's
		{
			GPIO_Config();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, R); // Pin Number 12 set to LOW
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, R); // Pin Number 13 set to LOW
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, R); // Pin Number 14 set to LOW
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, R); // Pin Number 15 set to LOW
			delay(350);
			res =0;
			button_count();
			
		}
		else if(enc1 == 6)  // led operation in clockwise direction
		{
			GPIO_Config();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, S); // Pin Number 12 set to HIGH
			delay(350); 									 // Delay function implemented by Aashish Kalra (PS No. 99007918)
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, R); // Pin Number 12 set to LOW
			delay(350);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, S); // Pin Number 13 set to HIGH
			delay(350);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, R); // Pin Number 13 set to LOW
			delay(350);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, S); // Pin Number 14 set to HIGH
			delay(350);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, R); // Pin Number 14 set to LOW
			delay(350);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, S); // Pin Number 15 set to HIGH
			delay(350);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, R); // Pin Number 15 set to LOW
			delay(350);
			res = 0;
			button_count();
		}
		else if(enc1 == 8) // led operation in Anticlockwise direction
		{
			GPIO_Config();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, S); // Pin Number 12 set to HIGH
			delay(350);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, R); // Pin Number 12 set to LOW
			delay(350);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, S); // Pin Number 15 set to HIGH
			delay(350);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, R); // Pin Number 15 set to LOW
			delay(350);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, S); // Pin Number 14 set to HIGH
			delay(350);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, R); // Pin Number 14 set to LOW
			delay(350);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, S); // Pin Number 13 set to HIGH
			delay(350);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, R); // Pin Number 13 set to LOW
			delay(350);

			res = 0;
			button_count();

		}
	}
}
int button_count(void)    // Button count function implemented by Aashish Kalra (PS NO. 99007918)
{
	GPIO_Config(); // Gpio's are configured
	int count = 0; // button count is initialized to zero
	uint32_t *pGpiodDataReg1 = (uint32_t *)0x40020010; 
	int sec = 10000000; 
	while (sec--)
	{
		if ((*pGpiodDataReg1) & (1 << GPIO_PIN_NO_0)) // Read input from pin number 0 (blue button)
		{ 
			delay(150);
			count++; // inceremnt count
		}
	}
	return count; // Returns no of key presses
}
