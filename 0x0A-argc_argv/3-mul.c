#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * Return: returns 0 if success
 * @argc: no of args
 * @argv: array of args
 */
int main(int argc, char *argv[])
{
	int ans, no, no1;

	if (argv[1] && argv[2] != NULL)
	{
		no = argc;
		no = atoi(argv[1]);
		no1 = atoi(argv[2]);
		ans = no * no1;
		printf("%d\n", ans);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
