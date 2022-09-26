#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strspn - Returns the number of bytes which are similar between s and accept
 * @s: the string
 * @accept: the sought out bytes
 * Return: the value of _strspn
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
