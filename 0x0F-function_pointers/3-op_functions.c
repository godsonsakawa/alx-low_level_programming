#include "3-calc.h"

/**
 * op_add - Adds two integers and returns the sum.
 *
 * @a: The first integer.
 * @b: The second integer.
 * Return: The sum of the two integers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts the second integer from the first integer.
 *
 * @a: The first integer.
 * @b: The second integer.
 * Return: The difference between the two integers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - Divide the first integer by the second integer.
 * If the second integer (divisor) is zero, the behavior is undefined.
 *
 * @a: The first integer (dividend).
 * @b: The second integer (divisor).
 * Return: The result of the division of the two integers.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}

	return (a / b);
}

/**
 * op_mod - Compute remainder of the division.
 *
 * @a: The first integer (dividend).
 * @b: The second integer (divisor).
 * Return: The remainder of the division of the two integers.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}

	return (a % b);
}

/**
 * op_mul - Multiplies two integers and returns the product.
 *
 * @a: The first integer (multiplier).
 * @b: The second integer (multiplicand).
 * Return: The product of the two integers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
