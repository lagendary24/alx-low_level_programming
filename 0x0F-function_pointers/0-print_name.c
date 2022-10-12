#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to function f.
 * @f
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
