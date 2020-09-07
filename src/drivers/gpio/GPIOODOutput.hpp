/*
 * GPIOODOutput.hpp
 *
 *  Created on: Aug. 29, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_GPIO_GPIOODOUTPUT_HPP_
#define DRIVERS_GPIO_GPIOODOUTPUT_HPP_

#include <mcu/MCU.hpp>

class GPIOODOutput {
	GPIOODOutput(MCU* mcu, GPIO_TypeDef* port, uint32_t pin, uint32_t pull,
			GPIO_PinState default_state);
	~GPIOODOutput();
	void set_low();
	void set_high_imp();
	void set_state(GPIO_PinState state);
};

#endif /* DRIVERS_GPIO_GPIOODOUTPUT_HPP_ */
