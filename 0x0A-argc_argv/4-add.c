#include <stdio.h>
#include <stdlib.h>
/**
  * main - check the code
  * @argc: number of arguments on the terminal.
  * @argv: an array of strings on the terminal.
  * Return: if no number is passed - 0
  *         if contains non-digits print Error/ -1
  */
int main(int argc, char *argv[])
{
	int i, add = 0;

	for (i = 1; i < argc; i++)
	{
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
