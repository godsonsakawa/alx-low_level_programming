#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
  * find_sqrt - Find the natural square root of an inputted number.
  * @num: The number to find the square root of.
  * @root: The root to be tested.
  * Return: If the number has a natuaral square root - the square root.
  *         Otherwise - -1.
  */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	
	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
  * _sqrt_recursion - Returns the natuaral square root of a number.
  * @n: The number to return the square root of.
  * Return: if  n has a natural square root - natural square root of n.
  *         if n does not have a natuaral square root - -1.
  */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
