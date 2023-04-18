#ifndef _DOG_
#define _DOG_
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - A dog structure
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 *
 * Description: This structure encompasses specific details of a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
