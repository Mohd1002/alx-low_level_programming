#include <stdio.h>
#include <string.h>
#include "main.h"
void print_rev(char *s)
{
	int len = strlen(s), str;

	for (str = len-1; str >= 0; str--)
	{
		_putchar(s[str]);
	}

}
