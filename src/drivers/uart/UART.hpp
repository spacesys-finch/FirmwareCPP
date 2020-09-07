/*
 * UART.hpp
 *
 *  Created on: Aug. 29, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_UART_UART_HPP_
#define DRIVERS_UART_UART_HPP_

#include <mcu/MCU.hpp>

template <uint32_t TX_BUF_SIZE=80, uint32_t RX_BUF_SIZE=80>
class UART {
	// by default, use the highest baud rate if one is not specified
	UART(MCU* mcu, USART_TypeDef* instance,
			GPIO_TypeDef* tx_port, uint32_t tx_pin, uint32_t tx_alternate,
			GPIO_TypeDef* rx_port, uint32_t rx_pin, uint32_t rx_alternate,
			uint32_t baud_rate = 230400);
	~UART();

	// TODO - figure out how to receive data by interrupt/DMA and store in buffer
	void write(uint8_t* buf, uint32_t count);
	void write_dma(uint8_t* buf, uint32_t count);
};

#endif /* DRIVERS_UART_UART_HPP_ */
