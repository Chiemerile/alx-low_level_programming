#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - fnx prints result of simple ops
 * @argc: num of args inputed in program
 * @argv: array of pntrs to args
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int numm1, numm2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	numm1 = atoi(argv[1]);
	op = argv[2];
	numm2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && numm2 == 0) ||
	    (*op == '%' && numm2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(numm1, numm2));

	return (0);
}
