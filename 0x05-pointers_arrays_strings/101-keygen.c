#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This prog genrts randm vald paswrds for the 101-crackme prog
 * Return: 0 on Success
 */

int main(void)
{
	int scale[100];
	int j, tsum, m;

	tsum = 0;

	srand(time(NULL));

	for (j = 0; j < 100; j++)
	{
		scale[j] = rand() % 78;
		tsum += (scale[j] + '0');
		putchar(scale[j] + '0');
		if ((2772 - tsum) - '0' < 78)
		{
			m = 2772 - tsum - '0';
			tsum += m;
			putchar(m + '0');
			break;
		}
	}

	return (0);
}
