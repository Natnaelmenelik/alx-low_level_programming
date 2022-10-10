#ifndef DOG_H
#define DOG_H

/**
 * File: dog.h
 * Desc: Header file that defines a new type struct dog.
 */

/**
 * struct dog - new user defined variable
 * @name : name of the owner
 * @age : age of the dog
 * @owner : owner of the dog
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

#endif
