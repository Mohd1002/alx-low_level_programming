#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the 2nd string
 * Return: the pointer to s3 the new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int chsum, i = 0;
	unsigned long int save;
	char *s3;

	if ((s1 == NULL) && (s2 == NULL))
	{
		s3 = malloc(sizeof(char));
		return (s3);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	chsum = strlen(s1) + strlen(s2) + 1;
	s3 = malloc(sizeof(char) * chsum);
	if (s3 == NULL)
	{
		return (NULL);
	}
	save = strlen(s1);
	while (i < strlen(s1))
	{
		if (s1[i] == '\0')
		{
			break;
		}
		s3[i] = s1[i];
		i++;
	}
	i = 0;
	for (i = 0; i < strlen(s2); i++)
	{
		s3[save] = s2[i];
		save++;
	}
	return (s3);
}
