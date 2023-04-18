#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The basic information of the dog
 * @name: Member one
 * @age: Member two
 * @owner: Member three
 *
 * Description: Description terms
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - typedef for the struct dog
 */

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
