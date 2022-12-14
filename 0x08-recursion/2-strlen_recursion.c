#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strlen_recursion - recursively returns the length of the string
 * @s: the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
