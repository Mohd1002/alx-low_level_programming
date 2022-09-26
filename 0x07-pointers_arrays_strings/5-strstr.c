#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strstr - finds exactly needle in haystack
 * @haystack: the string
 * @needle: the sought out string
 * Return: returns the value of strstr
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
