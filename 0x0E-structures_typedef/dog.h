#ifndef DOG_H
#define DOG_H

/**
 * struct dog- #
 * @name: #
 * @owner: #
 * @age: #
 */

typedef struct dog
{
	char *name, *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
