#ifndef DOG_H
#define DOG_H
typedef struct dog dog_t;
/**
 * struct dog - about dog
 * @name: the dogs name
 * @age: the dogs age
 * @owner: the dogs owner
 *
 * Description: structure containing dogs info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */

