#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	int set;

	set = '0';
	for (set = '0'; set <= '9'; set++)
	{
	putchar(set);
	if (set == '9')
	{
		putchar('\n');
		return (0);
	}
	putchar(',');
	putchar(' ');
	}
return (0);
}
