#include <stdio.h>
/**
  * main -entry point to code 
  * Return: 0 Always success.
  */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 10; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
			printf("%d\n", sum);
	}
	return (0);
}
