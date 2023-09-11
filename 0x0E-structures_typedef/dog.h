#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - struct
 *
 * Description: struct include name, age and owner
 *
 * @name: pointer to name
 *
 * @age: intger of age
 *
 * @owner: pointer to owner
*/
int main (void)
{
	typedef struct dog
	{
		char *name;
		float age;
		char *owner;
	};
}
#endif
