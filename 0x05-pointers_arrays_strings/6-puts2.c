#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - prints every other character in a string
 * @str: the string
 */
void puts2(char *str)
{
	int len = strlen(str), counter = 0;

	while (counter <= len)
	{
		_putchar(str[counter]);
		counter += 2;
	}
	_putchar('\n');
}
