#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The progm assigns a random num to the var n
 * every time it is executed. It checks and print whether
 * the number which is stored in variable n is +tive or -tive.
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
