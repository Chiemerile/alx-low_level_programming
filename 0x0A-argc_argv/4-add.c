#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - str whch are digit
 * @str: array str
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*declaring var*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count str*/
	{
		if (!isdigit(str[count])) /*check if str here are digits*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - print program name
 * @argc: counts args
 * @argv: Args
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/*declaring vars*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes thu whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI --> converts str to int*/
			sum += str_to_int;
		}
		/*condition if one of nums contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
