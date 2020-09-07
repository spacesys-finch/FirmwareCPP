/*
 * I2CWrite.hpp
 *
 *  Created on: Sep. 6, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_I2C_I2CWRITE_HPP_
#define DRIVERS_I2C_I2CWRITE_HPP_

#include <mcu/MCU.hpp>

// Need to forward declare this class because otherwise I2CDevice.hpp and
// I2CWrite.hpp need to #include each other which produces errors due to the
// order of class declarations
class I2CDevice;

template <uint32_t BUF_SIZE = 20>
class I2CWrite {
	I2CWrite(I2CDevice* device);
	~I2CWrite();

	void add(uint8_t byte, uint32_t count = 1);
};

#endif /* DRIVERS_I2C_I2CWRITE_HPP_ */
