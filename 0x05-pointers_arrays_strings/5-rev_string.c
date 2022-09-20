#include <stdio.h>
#include <string.h>
#include "main.h"

void rev_string(char *s)
{

	int len, *start, *end, counter;

	len = strlen(s);
	*start = 0;
	*end = len;
	counter = 0;

	while (len/2 >= 0)
	{
		
		*start = counter;
		*end = *end - counter;
