#include <stdio.h>
#include <stdlib.h>
/**
  * main - check the code.
  * @argc: refers to count of argumens on the terminal.
  * @argv: refers to an array of srings
  * Return: always 0 (success)
  */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
