#include <stdlib.h>

/**
 * print name - function to print name
 *
 * @name: name of the person
 * @f: function pointer that returns anything
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
