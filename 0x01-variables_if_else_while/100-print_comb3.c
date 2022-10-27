#include <stdio.h>
/**
 * main - Entry point of the code.
 * Return: Always 0 Success.
 */
int main(void)
{
	/* 48 represents 0 and 57 represents 9 in ASCII*/
	int i = 48;
	int j = 48;
	/*represents first digit on the double digits*/
	while (j < 58)
	{
		/*represents second int on the double integrers*/
		i = 48;
		while (i < 58)
		{
			/*To eliminiate similar digits from re-occuring*/
			if (j != i && j < i)
			{
				putchar(j);
				putchar(i);
				if (i == 57 && j == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
