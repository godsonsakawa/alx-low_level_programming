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
	dog_t *Bosco;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	Bosco = malloc(sizeof(dog_t));
	if (Bosco == NULL)
		return (NULL);

	Bosco->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (Bosco->name == NULL)
	{
		free(Bosco);
		return (NULL);
	}

	Bosco->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (Bosco->owner == NULL)
	{
		free(Bosco->name);
		free(Bosco);
		return (NULL);
	}

	Bosco->name = _strcopy(Bosco->name, name);
	Bosco->age = age;
	Bosco->owner = _strcopy(Bosco->owner, owner);

	return (Bosco);
}
