#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry pointi
 * Return: Always 1 (Success)
 */
int main(void)
{
	int num = '0';
	int counter = '0';
	int num1 = '0';
	int counter1 = '0';

	while (counter <= '8')
	{
		num1 = counter + 1;
		counter++;
		counter1 = num1;
		while (counter1 <= '9')
		{
			putchar(num);
			putchar(num1);
			putchar(',');
			putchar(' ');
			num1++;
			counter1++;
		}
		num++;

	}
	putchar('\n');
return (0);
}
