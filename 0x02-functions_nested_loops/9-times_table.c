#include "main.h"
/**
  * times_table - print 9-times table
  * Return: void.
  */
void times_table(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		int y;

		for (y = 0; y <= 9; y++)
		{
			int mul;

			mul = x * y;
			if (mul > 9)
			{
				_putchar(' ');
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
			else
			{
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



