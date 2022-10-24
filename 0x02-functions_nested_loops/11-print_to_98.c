#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting interger
 * Return: void.
 */
void print_to_98(int n)
{
	int i;

	for (n = 0; n <= 98; n++)
	{
		printf("%d, ", n);
	}
	for (i = n; i >= 98; i--)
	{
		printf("%d, ", i);
	}
	printf("\n");
}
