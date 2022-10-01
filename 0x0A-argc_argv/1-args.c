#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * Return: return 0 if success
 * @argc: no of args
 * @argv: array of args
 */
int main(int argc, char *argv[])
{
	argv[0] = "first";
	printf("%d\n", argc - 1);
	return (0);
}
