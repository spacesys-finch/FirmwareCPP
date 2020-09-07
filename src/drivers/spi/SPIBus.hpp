/*
 * SPIBus.hpp
 *
 *  Created on: Sep. 6, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_SPI_SPIBUS_HPP_
#define DRIVERS_SPI_SPIBUS_HPP_

#include <uart/UART.hpp>

class SPIBus {
	// TODO - figure out clock frequency
	SPIBus(MCU* mcu, UART<>* uart, SPI_TypeDef* instance,
			GPIO_TypeDef* sck_port, uint32_t sck_pin, uint32_t sck_alternate,
			GPIO_TypeDef* mosi_port, uint32_t mosi_pin, uint32_t mosi_alternate,
			GPIO_TypeDef* miso_port, uint32_t miso_pin, uint32_t miso_alternate,
			IRQn_Type irq,
			uint32_t polarity, uint32_t phase, uint32_t baud_prescaler);
	~SPIBus();
};

#endif /* DRIVERS_SPI_SPIBUS_HPP_ */
