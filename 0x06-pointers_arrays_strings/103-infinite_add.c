#include "main.h"

/**
 * rev_string - to revrs the contents of an array
 * @n: int paramets
 * Return: 0
 */

void rev_string(char *n)
{
	int k = 0;
	int l = 0;
	char stemp;

	while (*(n + k) != '\0')
	{
		k++;
	}
	k--;

	for (l = 0; l < k; l++, k--)
	{
		stemp = *(n + l);
		*(n + l) = *(n + k);
		*(n + k) = stemp;
	}
}

/**
 * infinite_add - sum up 2 nums
 * @n1: txt reprsntatn of num1 for the sum
 * @n2: txt reprsntatn of num2 for the sum
 * @r: the pointer to the buffer
 * @size_r: the buffer sz
 * Return: the pointer to the calln func
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ovrflw = 0, k = 0, l = 0, dgts = 0;
	int vl1 = 0, vl2 = 0, stemp_sum = 0;

	while (*(n1 + k) != '\0')
		k++;
	while (*(n2 + l) != '\0')
		l++;
	k--;
	l--;
	if (l >= size_r || k >= size_r)
		return (0);
	while (l >= 0 || k >= 0 || ovrflw == 1)
	{
		if (k < 0)
			vl1 = 0;
		else
			vl1 = *(n1 + k) - '0';
		if (l < 0)
			vl2 = 0;
		else
			vl2 = *(n2 + l) - '0';
		stemp_sum = vl1 + vl2 + ovrflw;
		if (stemp_sum >= 10)
			ovrflw = 1;
		else
			ovrflw = 0;
		if (dgts >= (size_r - 1))
			return (0);
		*(r + dgts) = (stemp_sum % 10) + '0';
		dgts++;
		l--;
		k--;
	}
	if (dgts == size_r)
		return (0);
	*(r + dgts) = '\0';
	rev_string(r);

	return (r);
}
