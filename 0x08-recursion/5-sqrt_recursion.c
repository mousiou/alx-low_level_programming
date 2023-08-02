#include "main.h"

/**
 * _sqrt_recursion - This the main function
 * @n: int n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * sqrt_recursion - This program recurses to find the natural
 * @n: integer paramtr
 * @i: integer parameter
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
