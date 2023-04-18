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


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
