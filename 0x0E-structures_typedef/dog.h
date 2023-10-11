#ifndef MY_HEADER_H
#define MY_HEADER_H
/**
 * struct dog - Entry point
 * @name: name of animal
 * @age: age of animal
 * @owner: who bought the dog
 * Description: struct for dog
 * Return: nothing
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
void free_dog(dog_t *d);
#endif
