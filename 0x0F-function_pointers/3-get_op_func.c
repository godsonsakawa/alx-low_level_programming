#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation.
 *
 * @s: The operator string.
 * Return: A pointer to the corresponding operation function.
 *         Otherwise: NULL if the operator is not recognized.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
