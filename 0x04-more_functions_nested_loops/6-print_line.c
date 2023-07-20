#include "main.h"
#include <stdio.h>

/**
 * print_line - This program Prints line dependent on the variable n.
 * @n : Variable indicaing how many '_' to print
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
