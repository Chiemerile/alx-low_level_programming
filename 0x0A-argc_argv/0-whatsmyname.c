#include <stdio.h>
#include "main.h"
/**
 * main - prints name then new line
 * @argc: num of args
 * @argv: args of array
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
