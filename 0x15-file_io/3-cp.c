#include "main.h"
/*
 * main - check the code.
 * @argc: number of arguments in the terminal.
 * @argv: strings as an argument in the terminal.
 * Return: 
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf(" Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		printf("Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	if (w = -1)
	{
		printf("Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	if (close == -1)
	{
		printf("Error: Can't close fd FD_VALUE");
		exit(100);
	}
	return (0);
}

/**
 * copy - copies contents of a file to another file.
 * @filename: pointer to our file.
 * @content: strings inside the file.
 * Return:
 */
int copy(const char *filename, char *content)
{
	int w, o;
	int len = 0;
	char *filename2;

	for (len = 0; 
	
	o = open(filename, O_RDWR, 0664);
	r = read(o, filename, len);
	w = write(STDIN_FILENO, filename2, r);


