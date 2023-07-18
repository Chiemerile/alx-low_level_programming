#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The program assigns a random number to var m every time it is run.
 * Then prints the last digit of the num contained in var m
 * Return: 0 (Success)
 */

int main(void)
{
	int m;

	srand(time(0));
	m = rand() - RAND_MAX / 2;

	if ((m % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", m, m % 10);
	}
	else if (((m % 10) < 6) && ((m % 10) != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", m, m % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", m, m % 10);
	}
	return (0);
}
