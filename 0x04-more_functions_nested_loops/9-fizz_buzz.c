#include "main.h"
#include <stdio.h>

/**
 * main - Will print nums frm 1-100, but instead print Fizz for multiples of 3
 * and Buzz fr multipls of 5
 * Return: 0 (Success)
 */

int main(void)
{
	int b;

	for (b = 1; b <= 100; b++)
	{
		if (b % 3 == 0 && b % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (b % 5 == 0 && b % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (b % 3 == 0 && b % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (b == 1)
		{
			printf("%d", b);
		}
		else
		{
			printf(" %d", b);
		}
	}
	printf("\n");

	return (0);
}
