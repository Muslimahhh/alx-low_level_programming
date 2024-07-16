#ifndef DOG_H
#define DOG_H

/**
* struct dog - Holds the properties for a dog
* @name: The dog's name
* @age: The dog's age
* @owner: The dog's owner name
*
* Description: This holds the details of a dog object
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* typedef dog_t - An alias for the dog struct
*/
typedef struct dog dog_t;

/*Function Prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

