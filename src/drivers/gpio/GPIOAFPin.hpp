/*
 * GPIOAFPin.hpp
 *
 *  Created on: Aug. 29, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_GPIO_GPIOAFPIN_HPP_
#define DRIVERS_GPIO_GPIOAFPIN_HPP_

#include <mcu/MCU.hpp>

class GPIOAFPin {
	GPIOAFPin(MCU* mcu, GPIO_TypeDef* port, uint32_t pin, uint32_t mode,
			uint32_t pull, uint32_t alternate);
	~GPIOAFPin();
};

#endif /* DRIVERS_GPIO_GPIOAFPIN_HPP_ */
