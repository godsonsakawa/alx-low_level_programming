#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the variable which we check for the last digit.
 * Return: void.
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = (n % 10) * -1;
	}
	else
	{
		i = n % 10;
	}
	_putchar(i + '0');
	return (i);
}
