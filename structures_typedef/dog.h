#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - Structure of dog
 * @name: Nam of dpg (type char *).
 * @age: age of dog (type float).
 * @owner: owner of dog (type char *).
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
