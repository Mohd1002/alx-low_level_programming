#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: the character being checked
 * Return: if success 1 if not 0
 */

int _islower(int c)
{
	if islower(c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
