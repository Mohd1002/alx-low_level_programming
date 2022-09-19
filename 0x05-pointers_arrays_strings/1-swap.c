#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: a value
 * @b: a value
 */
void swap_int(int *a, int *b)
{
	int store;

	store = *a;
	*a = *b;
	*b = store;
}
