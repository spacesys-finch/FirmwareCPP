/*
 * GPIOITInput.hpp
 *
 *  Created on: Aug. 29, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_GPIO_GPIOITINPUT_HPP_
#define DRIVERS_GPIO_GPIOITINPUT_HPP_

#include <mcu/MCU.hpp>

class GPIOITInput {
	// TODO how to specify ISR?
	GPIOITInput(MCU* mcu, GPIO_TypeDef* port, uint32_t pin, uint32_t mode,
			uint32_t pull);
	~GPIOITInput();
};

#endif /* DRIVERS_GPIO_GPIOITINPUT_HPP_ */
