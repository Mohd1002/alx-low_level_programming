#include <stdio.h>
#include <string.h>
/**
 */
int main(int argc, char *argv[])
{
	argv[0] = "first";
	printf("%d\n", argc - 1);
	return (0);
}
