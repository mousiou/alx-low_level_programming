#include <stdio.h>

void _const(void) __attribute__ ((constructor));

/**
 * _const - executes before main
 *
 * Return: void
 */
void _const(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
