#include "dog.h"

/**
  * init_dog - a function that initializes a variable of type struct dog
  * @name: pointer to name of the dog
  * @age: pointer to age of the dog
  * @owner: pointer to the owner of the dog
  * @d: poiter to type My_dog
  * Return: void.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
