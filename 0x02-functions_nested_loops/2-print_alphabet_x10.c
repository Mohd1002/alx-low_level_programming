#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int counter = 0;

	while (counter < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		counter++;
	}
}
