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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
