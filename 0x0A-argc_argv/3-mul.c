#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - check the code.
  * @argc: refers to count of argumens on the terminal.
  * @argv: refers to an array of srings
  * Return: always 0 (success)
  */
int main(int argc, char *argv[])
{
	int mul;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	mul = (num1 * num2);
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", mul);
	return (0);
}
