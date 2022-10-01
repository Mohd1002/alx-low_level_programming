#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 if success
 * @argc: no of args
 * @argv: array of args
 */
int main(int argc, char *argv[])
{
	int co = 0;

	while (co < argc)
	{
		printf("%s\n", argv[co]);
		co++;
	}
	return (0);
}
