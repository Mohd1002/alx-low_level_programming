#include <stdio.h>
/**
 * print_name - a pointer to a function
 * @name: the name used in the function
 * @f: the pointer
 * @char; the function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
