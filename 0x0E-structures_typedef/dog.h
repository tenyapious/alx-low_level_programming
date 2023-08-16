#ifndef STRUCT_DOG
#define STRUCT_DOG
/**
 * struct dog - a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif

#ifndef INIT_DOG
#define INIT_DOG
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

#ifndef PRINT_DOG
#define PRINT_DOG
void print_dog(struct dog *d);
#endif
