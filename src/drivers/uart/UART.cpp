/*
 * UART.cpp
 *
 *  Created on: Aug. 29, 2020
 *      Author: bruno
 */

#include <uart/UART.hpp>

template <uint32_t TX_BUF_SIZE, uint32_t RX_BUF_SIZE>
UART<TX_BUF_SIZE, RX_BUF_SIZE>::UART(MCU* mcu, USART_TypeDef* instance,
		GPIO_TypeDef* tx_port, uint32_t tx_pin, uint32_t tx_alternate,
		GPIO_TypeDef* rx_port, uint32_t rx_pin, uint32_t rx_alternate,
		uint32_t baud_rate) {
	// TODO
}

template <uint32_t TX_BUF_SIZE, uint32_t RX_BUF_SIZE>
UART<TX_BUF_SIZE, RX_BUF_SIZE>::~UART() {
}

template <uint32_t TX_BUF_SIZE, uint32_t RX_BUF_SIZE>
void UART<TX_BUF_SIZE, RX_BUF_SIZE>::write(uint8_t* buf, uint32_t count) {
	// TODO
}

template <uint32_t TX_BUF_SIZE, uint32_t RX_BUF_SIZE>
void UART<TX_BUF_SIZE, RX_BUF_SIZE>::write_dma(uint8_t* buf, uint32_t count) {
	// TODO
}
