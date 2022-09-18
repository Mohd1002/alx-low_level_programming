#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_sign - prints the sign of the number
 * @n: the number
 * Return: if n == 0 returns 0 if n > 0 returns 1 if n < 0 returns -1
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
