#include <stdio.h>
#include <string.h>
/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: the number of variables in the array
 */
void reverse_array(int *a, int n)
{
	int len, beg, r;

	len = n - 1;
	beg = 0;
	while (beg <= len)
	{
		r = a[beg];
		a[beg] = a[len];
		a[len] = r;
		beg++;
		len--;
	}
}
