#include "main.h"
/**
  * times_table - 
  *
  * Return:
  */
void times_table(void)
{
	int x = 0;

	while (x <= 9)
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
		x++;
	}
}



