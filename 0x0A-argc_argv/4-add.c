#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: returns 0 if success
 * @argc: no of args
 * @argv: array of args
 */
int main(int argc, char *argv[])
{
	int co = 1, ans = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (1);
	}
	while (co < argc)
	{
		if (!isdigit(*argv[co]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			ans += atoi(argv[co]);
                        co++;
		}
	}
	printf("%d\n", ans);
	return (0);
}
