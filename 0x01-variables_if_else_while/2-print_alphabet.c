#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	int x, lowercase;

	for (x = 'A'; x <= 'Z'; x++)
	{
	lowercase = tolower(x);
	putchar(lowercase);
	}
	putchar('\n');
return (0);
}
