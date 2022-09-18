#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Return: returns the value of the last digit
 * @n: the number
 */
int print_last_digit(int n)
{
	int last, ans;

	if (n < 0)
	{
		n = n - n * 2;
		last = n % 10;
	}
	else
	{
		last = n % 10;
	}
	ans = '0' + last;
	_putchar(ans);
	return (last);
}
