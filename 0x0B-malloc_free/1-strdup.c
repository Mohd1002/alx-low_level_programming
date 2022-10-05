#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - custom strdup function
 * @str: the string
 * Return: the new memory string
 */
char *_strdup(char *str)
{
	unsigned long int i = 0;
	char *strr = malloc(strlen(str)+ 1);

	if (str == NULL)
	{
		printf("failed to allocate memory");
		return (NULL);
	}
	if (strr == NULL)
	{
		printf("failed to allocate memory");
		return (NULL);
	}
	while (i < strlen(str))
	{
		strr[i] = str[i];
		i++;
	}
	return (strr);
}
