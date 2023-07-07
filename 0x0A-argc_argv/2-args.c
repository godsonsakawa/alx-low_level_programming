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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
