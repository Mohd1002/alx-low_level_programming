#include <stdio.h>
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: string one
 * @src: string two
 * @n: bytes allocated to the string copy
 * Return: the value of strncpy
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
