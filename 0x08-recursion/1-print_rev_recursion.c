#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - prints the string in reverse
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	if (strlen(s) <= 0)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(s[0]);
}
