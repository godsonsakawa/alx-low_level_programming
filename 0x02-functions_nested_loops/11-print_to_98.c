#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting interger
 * Return: void if (!(n == 98)).
 */
void print_to_98(int n)
{
	int i;

	for (i = 98; i > n; n++)
	{
		printf("%d, ", n);
	}
	for (i = 98; i < n; n--)
	{
		printf("%d, ", n);
	}
	if (n == i)
		printf("%d", n);
	printf("\n");
}
