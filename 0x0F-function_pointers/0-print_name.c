#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - calls a given fn to print a name
 * @name: name of person
 * @f: function to call
*/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
