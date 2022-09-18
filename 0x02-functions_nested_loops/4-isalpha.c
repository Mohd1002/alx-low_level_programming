#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetical character
 * @c: the character being checked
 * Return: if success 1 if not 0
 */

int _isalpha(int c)
{
	if isalpha(c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
