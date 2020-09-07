/*
 * Test.hpp
 *
 *  Created on: Sep. 6, 2020
 *      Author: bruno
 */

#ifndef DRIVERS_TEST_TEST_HPP_
#define DRIVERS_TEST_TEST_HPP_

#include <uart/Log.hpp>


#define ASSERT_EQ(a, b) Test::assert_eq((a), (b), __FILE__, __LINE__, __FUNCTION__)
// TODO (see ASSERT_EQ example)
#define ASSERT_NEQ(a, b)
#define ASSERT_LT(a, b)
#define ASSERT_LTE(a, b)
#define ASSERT_GT(a, b)
#define ASSERT_GTE(a, b)

#define ASSERT_EQ_FP(a, b)
#define ASSERT_NEQ_FP(a, b)
#define ASSERT_LT_FP(a, b)
#define ASSERT_LTE_FP(a, b)
#define ASSERT_GT_FP(a, b)
#define ASSERT_GTE_FP(a, b)

#define ASSERT_EQ_BYTES(a, b, count)
#define ASSERT_NEQ_BYTES(a, b, count)


class Test {
	Test();
	~Test();

	// Integer values
	static void assert_eq(uint32_t a, uint32_t b, char* file, uint32_t line,
			char* function);
	static void assert_neq(uint32_t a, uint32_t b, char* file, uint32_t line,
				char* function);
	static void assert_lt(uint32_t a, uint32_t b, char* file, uint32_t line,
			char* function);
	static void assert_lte(uint32_t a, uint32_t b, char* file, uint32_t line,
			char* function);
	static void assert_gt(uint32_t a, uint32_t b, char* file, uint32_t line,
			char* function);
	static void assert_gte(uint32_t a, uint32_t b, char* file, uint32_t line,
			char* function);

	// Floating-point values
	static void assert_eq_fp(double a, double b, char* file, uint32_t line,
			char* function);
	static void assert_neq_fp(double a, double b, char* file, uint32_t line,
			char* function);
	static void assert_lt_fp(double a, double b, char* file, uint32_t line,
			char* function);
	static void assert_lte_fp(double a, double b, char* file, uint32_t line,
			char* function);
	static void assert_gt_fp(double a, double b, char* file, uint32_t line,
			char* function);
	static void assert_gte_fp(double a, double b, char* file, uint32_t line,
			char* function);

	// Byte arrays
	static void assert_eq_bytes(uint8_t* a, uint8_t* b, uint32_t count,
			char* file, uint32_t line, char* function);
	static void assert_neq_bytes(uint8_t* a, uint8_t* b, uint32_t count,
			char* file, uint32_t line, char* function);
};

#endif /* DRIVERS_TEST_TEST_HPP_ */
