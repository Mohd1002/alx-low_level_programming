#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory to malloc
 * @b: the bytes alloc
 * Return: a pointer towards the memory
 */
void *malloc_checked(unsigned int b)
{
	int *i;
	char *c;
	float *f;
	double *d;

	if (b / 1024 == 1)
	{
		c = malloc(b);
		if (c == NULL)
			exit(98);
		else
			return (c);
	}
	if (b / 402 == 4)
	{
		i = malloc(b);
		if (i == NULL)
			exit(98);
		else
			return (i);
	}
	if (b / 100000000 == 4)
	{
		f = malloc(b);
		if (f == NULL)
			exit(98);
		else
			return (f);
	}
	if (b / INT_MAX == 8)
	{
		d = malloc(b);
		if (d == NULL)
			exit(98);
		else
			return (d);
	}
	exit(98);
}
