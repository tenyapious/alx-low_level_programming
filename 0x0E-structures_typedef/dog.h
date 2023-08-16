#ifndef STRUCT_DOG
#define STRUCT_DOG
/**
 * struct dog - a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

#ifndef INIT_DOG
#define INIT_DOG
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
