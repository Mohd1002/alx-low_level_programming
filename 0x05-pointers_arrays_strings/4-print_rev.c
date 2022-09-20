#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len >=  0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
