#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - fnx prints You're beat! and yet,
 * you must allow,\nI bore my house upon my back!\n
 * before main fnx is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
