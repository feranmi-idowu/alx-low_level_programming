#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a struct dog.
 * @d: pointer.
 *
 * return: void.
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	}
}
