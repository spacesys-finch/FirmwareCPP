/*
 * I2CDevice.hpp
 *
 *  Created on: Sep. 6, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_I2C_I2CDEVICE_HPP_
#define DRIVERS_I2C_I2CDEVICE_HPP_

#include <i2c/I2CBus.hpp>
#include <i2c/I2CRead.hpp>
#include <i2c/I2CWrite.hpp>

class I2CDevice {
	// addr is the 7-bit or 10-bit address
	I2CDevice(MCU* mcu, UART<>* uart, I2CBus* bus, uint16_t addr,
			uint32_t addr_mode, double max_freq_hz);
	~I2CDevice();

	void read(I2CRead<>* read);
	void write(I2CWrite<>* write);
};

#endif /* DRIVERS_I2C_I2CDEVICE_HPP_ */
