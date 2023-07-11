#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of coins that make up change for an amount.
 * @argc: Number of arguments.
 * @argv: String of arguments.
 * Return: 0 on success, -1 on failure.
 */
int main(int argc, char *argv[])
{
	int cents;
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}

	change += cents / 25;
	cents %= 25;

	change += cents / 10;
	cents %= 10;

	change += cents / 5;
	cents %= 5;

	change += cents / 2;
	cents %= 2;

	change += cents / 1;

	printf("%d\n", change);
	return (0);
}
