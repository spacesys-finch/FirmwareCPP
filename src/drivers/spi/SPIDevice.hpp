/*
 * SPIDevice.hpp
 *
 *  Created on: Sep. 6, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_SPI_SPIDEVICE_HPP_
#define DRIVERS_SPI_SPIDEVICE_HPP_

#include <spi/SPIBus.hpp>
#include <spi/SPITransfer.hpp>

class SPIDevice {
	SPIDevice(MCU* mcu, UART<>* uart, SPIBus* bus,
			GPIO_TypeDef* cs_port, uint32_t cs_pin, uint32_t cs_alternate,
			double max_freq_hz);
	~SPIDevice();

	void transfer(SPITransfer<>* transfer);
};

#endif /* DRIVERS_SPI_SPIDEVICE_HPP_ */
