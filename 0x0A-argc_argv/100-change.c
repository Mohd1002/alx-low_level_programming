#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - prints the min num of coins for change
 * @argc: no of arg
 * @argv: array of args
 * Return: returns 0 for success
 */
int main(int argc, char *argv[])
{
	int c, ans = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	c = atoi(argv[1]);
	while (c >= 25)
	{
		c = c - 25;
		ans++;
	}
	while (c >= 10)
	{
		c = c - 10;
		ans++;
	}
	while (c >= 5)
	{
		c = c - 5;
		ans++;
	}
	while (c >= 2)
	{
		c = c - 2;
		ans++;
	}
	while (c >= 1)
	{
		c = c - 1;
		ans++;
	}
	printf("%d\n", ans);
	return (0);
}
