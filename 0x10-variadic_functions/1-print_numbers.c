#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_numbers - prints numbers
  * @n: is the number of integers passed to the function
  * @separator: is the string to be printed between numbers
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	unsigned int nums;
	
	va_start(ap, n);/* Initialize the argument list*/
	while (i < n)
	{
		
		nums = va_arg(ap, int);/* get the next argument value*/
		printf("%d", nums);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(ap);
}

