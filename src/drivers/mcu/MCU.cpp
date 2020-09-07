/*
 * MCU.cpp
 *
 *  Created on: Aug. 29, 2020
 *      Author: bruno
 */

#include <mcu/MCU.hpp>

MCU::MCU(Board board) {
	HAL_Init();

	// TODO call the appropriate versions of SystemClock_Config(),
	// GPIOClock_Config(), etc. depending on which board/model it is
}

MCU::~MCU() {
}

MCU::Board MCU::get_board() {
	// TODO read the MCU's unique ID register and figure out which board it is
}
