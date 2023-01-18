#include "dog.h"
#include <stdio.h>

/**
  * print_dog - a function that prints a struct dog
  * @d: pointer to struct type dog
  * Return: void.
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if (d->name != NULL && d->age != 0 && d->owner != NULL)
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		else if (d->name == NULL) 
			printf("Name: (nil)\n");
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
	}
}
