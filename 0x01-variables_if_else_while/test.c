#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry pointi
 * Return: Always 1 (Success)
 */
int main(void)
{
        unsigned char let= 'a';
        int num= '0';

	for (num = 0; num <= 9; num++)
        putchar(num%16 + '0');
	for (let = 'a'; let <= 'f';let++)
        putchar(let%16 + '0');
        putchar('\n');
return (0);
}
