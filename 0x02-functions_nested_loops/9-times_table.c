#include "main.h"
/**
  * times_table - print 9-times table
  * Return: void.
  */
void times_table(void)
{
	int x, y, mul;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			mul = x * y;
			if (y == 0)
			{
				_putchar(mul + '0');
			}
			else if (mul > 9)
			{
				_putchar(' ');
				/*truncates the last value of the mul*/
				_putchar(mul / 10 + '0');
				/*returns the remainder, being last digit of mul*/
				_putchar(mul % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			if (y != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}



