#include <stdio.h>
#include "main.h"
#include <string.h>
void print_chessboard(char (*a)[8])
{
        int ctr, n1 , n2;

        ctr = 0;
        n1 = 0;
        n2 = 2;
	ctr = a[n1][n2];
	_putchar(ctr);
        _putchar('\n');
}
