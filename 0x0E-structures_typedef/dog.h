#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure for dogs
 * @name: its name
 * @age: its age
 * @owner: its owner
 *
 * Description: struct that could be used to describe anydog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
