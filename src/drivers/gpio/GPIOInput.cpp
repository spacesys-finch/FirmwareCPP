/*
 * GPIOInput.cpp
 *
 *  Created on: Aug. 29, 2020
 *      Author: bruno
 */

#include <gpio/GPIOInput.hpp>

GPIOInput::GPIOInput(MCU* mcu, GPIO_TypeDef* port, uint32_t pin, uint32_t pull) {
	// TODO
}

GPIOInput::~GPIOInput() {
}

bool GPIOInput::is_low() {
	// TODO
}

bool GPIOInput::is_high() {
	// TODO
}

GPIO_PinState GPIOInput::get_state() {
	// TODO
}

bool GPIOInput::wait_until_low(uint32_t timeout_ms) {
	// TODO
}

bool GPIOInput::wait_until_high(uint32_t timeout_ms) {
	// TODO
}
