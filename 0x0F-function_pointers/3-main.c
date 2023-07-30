#include "3-calc.h"

/**
 * main - function to perform arithmetic operations based on user input.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of character pointers containing the command-line arguments.
 * Return:  0 if the operation is successful.
 *          1 if Errors or the operator not recognized.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *s;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
		return (1);
	}

	s = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(s);
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*s == '/' || *s == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = f(num1, num2);
	printf("%d\n", result);

	return (0);
}
