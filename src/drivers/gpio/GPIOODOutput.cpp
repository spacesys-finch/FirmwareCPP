/*
 * GPIOODOutput.cpp
 *
 *  Created on: Aug. 29, 2020
 *      Author: bruno
 */

#include <gpio/GPIOODOutput.hpp>

GPIOODOutput::GPIOODOutput(MCU* mcu, GPIO_TypeDef* port, uint32_t pin,
		uint32_t pull, GPIO_PinState default_state) {
	port = port;
	pin = pin;
	pull = pull;

	//Initialize pin to HAL Library
	GPIO_InitTypeDef halGPIOHandler;
	halGPIOHandler.Pin = pin;
	halGPIOHandler.Pull = pull;
	halGPIOHandler.Mode = GPIO_MODE_OUTPUT;
	HAL_GPIO_Init(port, &halGPIOHandler);
}

GPIOODOutput::~GPIOODOutput() {
}

void GPIOODOutput::set_low() {
	HAL_GPIO_WritePin(port, pin, GPIO_PIN_RESET);
}

void GPIOODOutput::set_high_imp() {
	// TODO
}

void GPIOODOutput::set_state(GPIO_PinState state) {
	HAL_GPIO_WritePin(port, pin, state);
}
