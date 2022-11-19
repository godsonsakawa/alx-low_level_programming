#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - summing parameters
  * @n: references the number of arguments taken to account.
  * Return: Always 0 (success)
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum = 0;

	va_start(ap, n);/* Initialize the argument list*/
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);/* get the next argument value*/
	}
	va_end(ap);
	return (sum);
}
