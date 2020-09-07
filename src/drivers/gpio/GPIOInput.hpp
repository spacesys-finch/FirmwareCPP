/*
 * GPIOInput.hpp
 *
 *  Created on: Aug. 29, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_GPIO_GPIOINPUT_HPP_
#define DRIVERS_GPIO_GPIOINPUT_HPP_

#include <mcu/MCU.hpp>

class GPIOInput {
	GPIOInput(MCU* mcu, GPIO_TypeDef* port, uint32_t pin, uint32_t pull);
	~GPIOInput();
	bool is_low();
	bool is_high();
	GPIO_PinState get_state();
	bool wait_until_low(uint32_t timeout_ms);
	bool wait_until_high(uint32_t timeout_ms);
};

#endif /* DRIVERS_GPIO_GPIOINPUT_HPP_ */
