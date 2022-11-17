#include "function_pointers.h"
/**
  * print_name - prints name
  * @name: name to be printed
  * @f: - function pointer
  * Return: void.
  */
void print_name(char *name, void (*f)(char *))
{
	void print_name_as_is(char *name);
	void print_name_uppercase(char *name);

	if (f == print_name_as_is)
	{
		f(name);
	}
	else if (f == print_name_uppercase)
	{
		 f(name);
	}
}


