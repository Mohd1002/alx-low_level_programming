#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars and initializes c
 * @c: the char
 * @size: the size of the array
 * Return: returns the array
 */
char *create_array(unsigned int size, char c)
{
	char *A = malloc(size * sizeof(c));
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	while (i <= size)
	{
		A[i] = c;
		if (A == NULL)
		{
			printf("Can't allocate %d bytes (after %d calls)\n", size, i);
			return (NULL);
		}
		i++;
	}
	return (A);
}
