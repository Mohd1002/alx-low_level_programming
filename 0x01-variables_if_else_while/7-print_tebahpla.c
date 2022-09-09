#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	char x, lowercase;

	for (x = 'Z'; x >= 'A'; x--)
	{
	lowercase = tolower(x);
	putchar(lowercase);
	}
	putchar('\n');
return (0);
}
