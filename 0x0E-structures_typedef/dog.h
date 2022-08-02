#ifndef DOG_H
#define DOG_H
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

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */

