#ifndef _MY_DOG_
#define _MY_DOG_

#include <stddef.h>

/**
  * struct dog - structure dog
  * @name: pointer to name of the dog
  * @age: age of the dog.
  * @owner: pointer to owner of the dog.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_t - Typedef for struct dog
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _MY_DOG_ */
