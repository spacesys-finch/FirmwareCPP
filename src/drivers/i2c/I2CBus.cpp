/*
 * I2CBus.cpp
 *
 *  Created on: Sep. 6, 2020
 *      Author: bruno
 */

#include <i2c/I2CBus.hpp>

I2CBus::I2CBus(MCU* mcu, UART<>* uart, I2C_TypeDef* instance,
		GPIO_TypeDef* scl_port, uint32_t scl_pin, uint32_t scl_alternate,
		GPIO_TypeDef* sda_port, uint32_t sda_pin, uint32_t sda_alternate,
		IRQn_Type event_irq, IRQn_Type error_irq,
		uint32_t addr_mode, uint32_t timing) {

	// TODO
}

I2CBus::~I2CBus() {
}

