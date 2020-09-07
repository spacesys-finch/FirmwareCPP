/*
 * SPITransfer.hpp
 *
 *  Created on: Sep. 6, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_SPI_SPITRANSFER_HPP_
#define DRIVERS_SPI_SPITRANSFER_HPP_

#include <mcu/MCU.hpp>

// Need to forward declare this class because otherwise SPIDevice.hpp and
// SPITransfer.hpp need to #include each other which produces errors due to the
// order of class declarations
class SPIDevice;

template <uint32_t BUF_SIZE = 20>
class SPITransfer {
	SPITransfer(SPIDevice* device);
	~SPITransfer();

	void add(uint8_t byte, uint32_t count = 1);
};

#endif /* DRIVERS_SPI_SPITRANSFER_HPP_ */
