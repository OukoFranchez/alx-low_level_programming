#ifndef DOG_H
#define DOG_H

/**
 * struct dog - will define various elements of a dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * this will contain various information about a dog
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
dog_t *new_dog(char *name, float age, char *owner);


#endif /* DOG_H */
