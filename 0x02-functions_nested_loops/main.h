#include <stdio.h>
/* print_alphabet - prints the alphabet
 */

int _putchar(char);

int print_alphabet(void)
{
        char a = 'a';
        for (a = 'a'; a <= 'z';a++)
        {
                _putchar(a);
        }
        _putchar('\n');
return (0);
}
