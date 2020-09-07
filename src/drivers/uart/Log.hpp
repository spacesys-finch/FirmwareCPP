/*
 * Log.hpp
 *
 *  Created on: Sep. 6, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_UART_LOG_HPP_
#define DRIVERS_UART_LOG_HPP_

#include <uart/UART.hpp>
#include <cstdarg>

class Log {
	enum class Level {
		ERROR,
		WARNING,
		INFO,
		// Need to make sure DEBUG is not defined as a symbol in the CubeIDE
		// project, or else there will be an error here
		DEBUG,
		VERBOSE,
	};

	// Default to INFO for medium logging information
	Log(MCU* mcu, UART<>* uart, Level level = Level::INFO);
	~Log();

	void set_level(Level level);
	static void set_global_level(Level level);

	void log(Level level, char* format, va_list args);

	void error(char* format, ...);
	void warning(char* format, ...);
	void info(char* format, ...);
	void debug(char* format, ...);
	void verbose(char* format, ...);
};

#endif /* DRIVERS_UART_LOG_HPP_ */
