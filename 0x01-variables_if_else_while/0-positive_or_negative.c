#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The program assigns a random number to the variable m
 * every time it is executed. It checks and print whether
 * the number which is stored in variable m is +tive or -tive.
 * Return: 0 (Success)
 */

int main(void)
{
	int m;

	srand(time(0));
	m = rand() - RAND_MAX / 2;

	if (m > 0)
	{
		printf("%d is positive\n", m);
	}
	else if (m == 0)
	{
		printf("%d is zero\n", m);
	}
	else
	{
		printf("%d is negative\n", m);
	}
	return (0);
}
