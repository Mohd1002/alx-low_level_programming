#include <stdio.h>
/**
 * main - Entry point | prints out the bytes in use by each type
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(unsigned long));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
