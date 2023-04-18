#ifndef DOG_C
#define DOG_C
/**
 * struct dog - structure for dogs
 * @name: its name
 * @age: its age
 * @owner: its owner
 */
typedef struct dog dog;
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
