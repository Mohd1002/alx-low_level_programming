#include <stdio.h>
#include <string.h>
#include <ctype.h>
char *string_toupper(char *str)
{
        int len,c;

	c = 0;
        len = strlen(str);
	up = toupper(str[c]);
        while (len >= 0)
        {
		if (islower(str[c]))
		{
			up;
		}
		c++;
		len--;
        }
	return (0);
}
