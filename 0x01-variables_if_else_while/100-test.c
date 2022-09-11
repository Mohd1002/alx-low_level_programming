#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
        int set, set1;

        set = '0';
        set1 = '0';
        for (set = '0'; set <= '8'; set++)
        {
        set1 += 1;
        if (set == '8')
        {
                putchar('\n');
                return (0);
        }
                for (set1 = set1; set1 <= '9'; set1++)
                {
                putchar(set);
                putchar(set1);
                putchar(',');
                putchar(' ');
                }
        }
return (0);
}
