#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_chessboard - prints a two dimensional array
 * @a: the array
 */
void print_chessboard(char (*a)[8])
{
	int ctr, n1, n2, counter, counter1 = 1;

	counter = 0;
	ctr = 0;
	n1 = 0;
	n2 = 0;
	while (counter <= 64)
	{
		ctr = a[n1][n2];
		_putchar(ctr);
		if (counter1 == 8)
		{
			counter1 = 0;
			_putchar('\n');
		}
		n2++;
		counter++;
		counter1++;
	}
}
