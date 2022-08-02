#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a struct dog
 * @d: pointer
 *
 * return: 0
 */
void print_dog(struct dog *d)
{
	if(d == 0)
	{
		return;
	}
	else
	{
		if(d->name == NULL)
			printf("name: (nil)\n");
		else
			printf("name: %s\n", d->name);

	printf("age: %f\n", d->age);

	if(d->owner == NULL)
		printf("name: (nil)\n");
	else
		printf("name: %s\n", d->name);
	}
}
