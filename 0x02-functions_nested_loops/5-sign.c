#include "main.h"

/**
 * print_sign - This prgram prints the sign of a number it checks
 * @n: and
 * Return: 1 and prints + if it's greater than zero
 * 0 and prints 0 if it's zero
 * -1 and prints - if it's less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
