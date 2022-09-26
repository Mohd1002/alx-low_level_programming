#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strpbrk - returns bytes that match a set of bytes from string
 * @s: the string
 * @accept: the set of bytes requirement
 * Return: returns the value of strpbrk
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
