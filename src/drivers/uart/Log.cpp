/*
 * Log.cpp
 *
 *  Created on: Sep. 6, 2020
 *      Author: bruno
 */

#include <uart/Log.hpp>

Log::Log(MCU* mcu, UART<>* uart, Level level) {
	// TODO
}

Log::~Log() {
}

void Log::set_level(Level level) {
	// TODO
}

void Log::set_global_level(Level level) {
	// TODO
}

void Log::log(Level level, char* format, va_list args) {
	// TODO
}

void Log::error(char* format, ...) {
	// TODO
}

void Log::warning(char* format, ...) {
	// TODO
}

void Log::info(char* format, ...) {
	// TODO
}

void Log::debug(char* format, ...) {
	// TODO
}

void Log::verbose(char* format, ...) {
	// TODO
}
