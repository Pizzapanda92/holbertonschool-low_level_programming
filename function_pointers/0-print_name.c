#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function given as a parameter.
 *
 * @name: Pointer to the string (name) to be printed or processed.
 *
 * @f: Pointer to a function that takes a char * argument and returns void.
 *
*/

void print_name(char *name, void (*f)(char *))

{
	if (name && f)
	{
		f(name);
	}
}
