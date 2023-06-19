#ifndef DOG_H
#define DOG_H

/**
 * struct dog- #
 * @name: #
 * @owner: #
 * @age: #
 */

struct dog
{
	char *name, *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
