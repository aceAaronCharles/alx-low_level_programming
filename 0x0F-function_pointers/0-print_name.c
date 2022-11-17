#include <stdio.h>
#include "main.h"

/**
 * print name - function to print name
 *
 * @name: name of the person
 * @f: function pointer that returns anything
 */ 

void print_name(char *name, void (*f)(char *))

{ 
	if (f && name)
		f(name);
}
