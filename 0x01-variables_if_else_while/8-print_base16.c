#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry pointi
 * Return: Always 1 (Success)
 */
int main(void)
{
	int let = 'A', final;
	int num = '0';

	for (num = '0' ; num <= '9'; num++)
	{
	putchar(num);
	}
	for (let = 'A' ; let <= 'F'; let++)
	{
	final = tolower(let);
	putchar(final);
	}
	putchar('\n');
return (0);
}
