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
typedef struct dog dog;
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
