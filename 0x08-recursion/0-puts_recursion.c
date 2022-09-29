#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _puts_recursion - recursively prints a string
 * @s: the string
 * return: void
 */
void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		putchar('\n');
		return;
	}
	putchar(s[0]);
	_puts_recursion(s + 1);
}
