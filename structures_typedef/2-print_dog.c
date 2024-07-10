#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog
 *
 * If an element is NULL, print (nil) instead.
 * If d is NULL, print nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

		printf("Age: %f\n", d->age);

			if (d->owner == NULL)
			{
				printf("Owner: (nil)\n");
			}
			else
			{
				printf("Owner: %s\n", d->owner);
			}
}
