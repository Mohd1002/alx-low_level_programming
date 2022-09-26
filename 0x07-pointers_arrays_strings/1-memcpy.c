#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memcpy -  copies memory area
 * @dest: where its being copied to
 * @src: where its copied from
 * @n: the amount of bytes being copied
 * Return: the value of _memcpy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
