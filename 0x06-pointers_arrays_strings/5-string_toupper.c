#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - changes all lowercase letters in a string into uppercase
 * @str: the string
 * Return: returns the value of str
 */
char *string_toupper(char *str)
{
	int len, c;

	c = 0;
	len = strlen(str);
	while (len >= 0)
	{
		if islower(str[c])
		{
			str[c] = toupper(str[c]);
		}
		c++;
		len--;
	}
	return (str);
}
