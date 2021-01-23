/*
 * GPIOInput.cpp
 *
 *  Created on: Aug. 29, 2020
 *      Author: bruno
 */

#include <gpio/GPIOInput.hpp>

/*
 * Initialize GPIO Pin to input state and return a GPIOInput object
 * @param GPIO_TypeDef* port - the GPIO port of the pin
 * @param uint32_t pin - pin number
 * @param unit32_t pull - GPIO pull
 */
GPIOInput::GPIOInput(MCU* mcu, GPIO_TypeDef* port, uint32_t pin, uint32_t pull) {
	//Set values of GPIOInput Object
	mcu = mcu;
	port = port;
	pin = pin;
	pull = pull;

	//Initialize pin to HAL Library
	GPIO_InitTypeDef halGPIOHandler;
	halGPIOHandler.Pin = pin;
	halGPIOHandler.Pull = pull;
	halGPIOHandler.Mode = GPIO_MODE_INPUT;
	HAL_GPIO_Init(port, &halGPIOHandler);
}

GPIOInput::~GPIOInput() {
}

bool GPIOInput::is_low() {
	return HAL_GPIO_ReadPin(port, pin) == GPIO_PIN_RESET;
}

bool GPIOInput::is_high() {
	return HAL_GPIO_ReadPin(port, pin) == GPIO_PIN_SET;
}

GPIO_PinState GPIOInput::get_state() {
	return HAL_GPIO_ReadPin(port, pin);
}

bool GPIOInput::wait_until_low(uint32_t timeout_ms) {
	// TODO
}

bool GPIOInput::wait_until_high(uint32_t timeout_ms) {
	// TODO
}
