#include "dog.h"
#include "main.h"
#include <stdlib>



/**
* init_dog - is function for init struct.
* @name: parameter1.
* @age: parameter2.
* @owner: parameter3
* @d: is struct1
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	d = malloc(sizeof(*d));

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
