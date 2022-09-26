#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with a constant byte
 * @s: the memory
 * @b: the constant byte
 * @n: amount of memory to filled
 * Return: the value of _memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
