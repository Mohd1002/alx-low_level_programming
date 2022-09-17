#include <stdio.h>

/**
 * print_alphabet - prints the alphabet
 *@c: the character to print
 *
 * Return: On succes 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

int print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
return (0);
}
