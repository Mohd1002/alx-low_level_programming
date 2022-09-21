#include <stdio.h>
#include <string.h>
/**
 * _strncat - appends src to dest by the value of n
 * @dest: string one
 * @src: string two
 * @n: the byte limit
 * Return: the value of _strncat
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
