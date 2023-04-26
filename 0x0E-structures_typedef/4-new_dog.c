#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a ne STRUC of dog struct
 * @name: its name member
 * @age: its age member
 * @owner: its owner member
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s;
	/*
*	int l1, l2;
*
*	l1 = strlen(name);
*	l2 = strlen(owner);
	*/
	s = malloc(sizeof(dog_t));
	if (!s)
		return ('\0');

	s->name = malloc(sizeof(name));
	if (!(s->name))
	{
		free(s);
		return ('\0');
	}
	strcpy(s->name, name);
	s->age = age;
	s->owner = malloc(sizeof(owner));
	if (!(s->owner))
	{
		free(s->name);
		free(s);
		return ('\0');
	}
	strcpy(s->owner, owner);

	return (s);
}
