#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
* print_dog - is function for init struct
*
* @d: is struct1
*
*/

void print_dog(struct dog *d)

{
	if (d != NULL)
	{
		if (d.name != NULL && d.age != NULL && d.owner != NULL)
		{
			printf("Name: %s\n", d.name);
			printf("Age: %f\n", d.age);
			printf("Owner: %s\n", d.owner);
		}
		else if (d.name == NULL || d.age == NULL || d.owner == NULL)
		{
			printf("nil\n");
		}
	}

	else
	{
	}
}
