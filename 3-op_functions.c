#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of two nums
 * @a: first num
 * @b: second num
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns diff of two nums
 * @a: first num
 * @b: second num
 *
 * Return: diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns prod of two nums
 * @a: first num
 * @b: second num
 *
 * Return: prod of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns divi of two nums
 * @a: first num
 * @b: second num
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns mod
 * @a: first num
 * @b: second num
 *
 * Return: mod of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
