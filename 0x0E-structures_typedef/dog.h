#ifndef MAIN_H
#define MAIN_H


/**
* struct dog - is struct to describe dog propriety.
* @name: parameter1.
* @age: parameter2.
* @owner: parameter3
*
*/

struct dog

{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
