/*
 * SPIDevice.cpp
 *
 *  Created on: Sep. 6, 2020
 *      Author: bruno
 */

#include <spi/SPIDevice.hpp>

SPIDevice::SPIDevice(MCU* mcu, UART<>* uart, SPIBus* bus,
		GPIO_TypeDef* cs_port, uint32_t cs_pin, uint32_t cs_alternate,
		double max_freq_hz) {
	// TODO
}

SPIDevice::~SPIDevice() {
}

void SPIDevice::transfer(SPITransfer<>* transfer) {
	// TODO
}
