#ifndef _MY_DOG_
#define _MY_DOG_

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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
