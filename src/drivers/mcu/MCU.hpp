/*
 * MCU.hpp
 *
 *  Created on: Aug. 29, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_MCU_MCU_HPP_
#define DRIVERS_MCU_MCU_HPP_

#include <stm32h7xx_hal.h>

class MCU {
	enum class Board {
		STM32G474_DEV_KIT,
		STM32H743_DEV_KIT,
		PAY_V1,
		// add a new option for each board and version number
	};

	enum class Model {
		STM32G474RETX,
		STM32H743ZITX,
	};

	MCU(Board board);
	~MCU();

	static Board get_board();
};

#endif /* DRIVERS_MCU_MCU_HPP_ */
