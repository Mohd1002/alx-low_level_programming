#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 */
int main(int argc, char *argv[])
{
	int c = 25, ch = 10, cha = 5, chan = 2, chang = 1, change[5], i, ans;

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
	c = atoi(argv[1]) / c;
	ans = c;
	ch = atoi(argv[1]) / ch;
	cha = atoi(argv[1]) / cha;
	chan = atoi(argv[1]) / chan;
	chang = atoi(argv[1]) / chang;
	change[0] = c;
	change[1] = ch;
	change[2] = cha;
	change[3] = chan;
	change[4] = chang;
	for (i = 1; i <= 4; i++)
	{
		if (ans  > change[i])
		{
			ans = change[i];
		}
	}
	printf("%d\n", ans);
	return (0);
}
