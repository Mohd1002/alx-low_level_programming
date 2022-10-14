#include <stdio.h>
/**
 * array_iterator - iterates an array's elements
 * @array: the array
 * @size: the size of the array
 * @action: the function using the array's elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
