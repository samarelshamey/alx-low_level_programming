#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct
 *
 * Description: struct include name, age and owner
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: owner name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
