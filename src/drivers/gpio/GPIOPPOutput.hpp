/*
 * GPIOPPOutput.hpp
 *
 *  Created on: Aug. 29, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_GPIO_GPIOPPOUTPUT_HPP_
#define DRIVERS_GPIO_GPIOPPOUTPUT_HPP_

#include <mcu/MCU.hpp>

class GPIOPPOutput {
	GPIOPPOutput(MCU* mcu, GPIO_TypeDef* port, uint32_t pin,
			GPIO_PinState default_state);
	~GPIOPPOutput();
	void set_low();
	void set_high();
	void set_state(GPIO_PinState state);
};

#endif /* DRIVERS_GPIO_GPIOPPOUTPUT_HPP_ */
