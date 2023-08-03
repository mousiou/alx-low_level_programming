#include "main.h"

int tmp_prime(int n, int i);

/**
 * acprime - This function calculates if a number is prime recursively
 * @n: integer parameter
 * @m: integer parameter
 * Return: 1 if true, else 0
 */

int acprime(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (acprime(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - This function checks if a number is prime
 * @n: integer parameter
 * Return: 1 if true, else 0
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (acprime(3, n));
	}
}
