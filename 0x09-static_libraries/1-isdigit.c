#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - returns 1 ifdigit else 0
 * @c: the character or number
 * Return: the boolean value
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
