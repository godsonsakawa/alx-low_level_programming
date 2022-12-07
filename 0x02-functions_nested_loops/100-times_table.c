#include "main.h"
/**
  * print_times_table - prints n times table
  * @n: references the number showing type of times table
  * Return: void
  */
void print_times_table(int n)
{
	int x, y, mul;

	:xif (n <= 15 && n > 0)
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			mul = x * y;
			if (mul <= 9 && mul > 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			if (mul <= 99 && mul > 0)
			{
				 _putchar(' ');
				 _putchar(mul / 10 + '0');
				 _putchar(mul  % 10 + '0');
			}
			else if (mul >= 100)  
			{
				_putchar(((mul / 100) % 10) + '0');
				_putchar(((mul / 10) % 10) + '0');
				_putchar((mul  % 10) + '0');
			}
			if (y != n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
