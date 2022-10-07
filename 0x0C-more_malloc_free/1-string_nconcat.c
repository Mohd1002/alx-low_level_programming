#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: delimiter
 * Return: the combined strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strr;
	unsigned long int chsum, i = 0, save = strlen(s1), s2len = strlen(s2) - n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
	{
		chsum = sizeof(char) * strlen(s1) + strlen(s2) + 1;
	}
	else
	{
		chsum = sizeof(char) * strlen(s1) + strlen(s2) - s2len + 1;
	}
	strr = malloc(chsum);
	while (i < strlen(s1))
	{
		strr[i] = s1[i];
		i++;
	}
	if (n >= strlen(s2))
	{
		for (i = 0; i < strlen(s1); i++)
		{
			strr[i] = s1[i];
		}
	}
	else
	{
		for (i = 0; i < strlen(s2) - s2len; i++)
		{
			strr[save] = s2[i];
			save++;
		}
	}
	return (strr);
}
