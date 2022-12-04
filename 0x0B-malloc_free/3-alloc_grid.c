#include "main.h"
/**
  * alloc_grid - returns a pointer to a 2-dimensional array
  *              of integers with each element initialized to 0.
  * @width: width of the 2-dimensional array.
  * @height: height of the 2-dimensional array.
  * Return: a pointer to a 2 dimensional array of ints.
  *         Otherwise: if the function fails || width || height <= 0 - NULL.
  */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
