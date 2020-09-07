/*
 * I2CDevice.cpp
 *
 *  Created on: Sep. 6, 2020
 *      Author: bruno
 */

#include <i2c/I2CDevice.hpp>

I2CDevice::I2CDevice(MCU* mcu, UART<>* uart, I2CBus* bus, uint16_t addr,
		uint32_t addr_mode, double max_freq_hz) {
	// TODO
}

I2CDevice::~I2CDevice() {
}

void I2CDevice::read(I2CRead<>* read) {
	// TODO
}

void I2CDevice::write(I2CWrite<>* write) {
	// TODO
}
