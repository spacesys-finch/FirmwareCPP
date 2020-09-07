/*
 * I2CBus.hpp
 *
 *  Created on: Sep. 6, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_I2C_I2CBUS_HPP_
#define DRIVERS_I2C_I2CBUS_HPP_

#include <uart/UART.hpp>

class I2CBus {
	// TODO - figure out I2C_TIMINGR register and clock frequency
	I2CBus(MCU* mcu, UART<>* uart, I2C_TypeDef* instance,
			GPIO_TypeDef* scl_port, uint32_t scl_pin, uint32_t scl_alternate,
			GPIO_TypeDef* sda_port, uint32_t sda_pin, uint32_t sda_alternate,
			IRQn_Type event_irq, IRQn_Type error_irq,
			uint32_t addr_mode, uint32_t timing);
	~I2CBus();
};

#endif /* DRIVERS_I2C_I2CBUS_HPP_ */
