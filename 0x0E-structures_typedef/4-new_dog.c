#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
  * _strlen - Length of a string.
  * @str: string to be measured.
  * Return: Length of the string.
  */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
  * _strcopy - copies a string pointed to by src,
  *            including the terminating null byte,
  *            to a buffer pointed to by dest.
  * @dest: The buffer storing the string.
  * @src: The source string.
  * Return: Pointer to the destination.
  */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
  * new_dog - Creates a new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: Owner of the dog
  * Return: pointer to the new struct dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	_strcopy(new_dog->name, name);
	new_dog->age = age;
	_strcopy(new_dog->owner, owner);

	return (new_dog);
}
