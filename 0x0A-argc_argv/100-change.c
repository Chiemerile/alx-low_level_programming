#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints min num of coins to
 * make change for money amt
 * @argc: numb of args
 * @argv: array of args
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, i, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			res++;
			num -= coins[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
