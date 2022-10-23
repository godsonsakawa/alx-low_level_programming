#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack.
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int hr1, hr2, mn1, mn2;

	for (hr1 = 0; hr1 <= 2; hr1++)
	{
		if (hr1 == 2 && hr2 == 4)
		{
			break;
		}
		for (hr2 = 0; hr2 < 10; hr2++)
		{
			if (hr1 == 2 && hr2 == 4)
			{
				break;
			}
			for (mn1 = 0; mn1 < 6; mn1++)
			{
				if (hr1 == 2 && hr2 == 4)
				{
					break;
				}
				for (mn2 = 0; mn2 < 9; mn2++)
				{
					if (hr1 == 2 && hr2 == 4)
					{
						break;
					}
					_putchar(hr1 + '0');
					_putchar(hr2 + '0');
					_putchar(':');
					_putchar(mn1 + '0');
					_putchar(mn2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
