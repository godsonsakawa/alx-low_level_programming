#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - check the code
  * @argc: number of arguments on the terminal.
  * @argv: an array of strings on the terminal.
  * Return: if no number is passed - 0
  *         if contains non-digits print Error/ -1
  */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
