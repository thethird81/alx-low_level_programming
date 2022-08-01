#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - a structure representing a dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void prin_dog(st);
dog_t *new_dog(chatruct dog *dr *name, float age, char *owner);
void *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif
