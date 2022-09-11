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
	int num2 = '0';
	int counter2 = '0';

	while (counter2 <= '7')
	{
		num = counter2 + 1;
		counter2++;
		counter = num;
		while (counter <= '8')
		{
			num1 = counter + 1;
			counter++;
			counter1 = num1;
			while (counter1 <= '9')
			{
				putchar(num2);
				putchar(num);
				putchar(num1);
				if (counter2 > '7')
				{
					putchar('\n');
					return (0);
				}
				putchar(',');
				putchar(' ');
				num1++;
				counter1++;
			}
			num++;
		}
	num2++;
	}
return (0);
}
