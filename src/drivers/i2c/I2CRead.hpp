/*
 * I2CRead.hpp
 *
 *  Created on: Sep. 6, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_I2C_I2CREAD_HPP_
#define DRIVERS_I2C_I2CREAD_HPP_

#include <mcu/MCU.hpp>

// Need to forward declare this class because otherwise I2CDevice.hpp and
// I2CRead.hpp need to #include each other which produces errors due to the
// order of class declarations
class I2CDevice;

template <uint32_t BUF_SIZE = 20>
class I2CRead {
	I2CRead(I2CDevice* device, uint32_t count = BUF_SIZE);
	~I2CRead();
};

#endif /* DRIVERS_I2C_I2CREAD_HPP_ */
