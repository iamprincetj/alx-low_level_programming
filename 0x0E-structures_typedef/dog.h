#ifndef _DOG_H
#define _DOG_H

/**
 *struct dog - a struct
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif /* _DOG_H */
