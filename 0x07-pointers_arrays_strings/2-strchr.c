#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strchr - locates the first occurence of c in s
 * @s: the word
 * @c: the letter
 * Return: the value of _strchr
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
