#include "main.h"

/**
 * print_alphabet_x10 - This program prints the alphabet x10, in lowercase,
 * Description: followed by a new line
*/
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
