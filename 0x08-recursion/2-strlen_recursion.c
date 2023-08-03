#include "main.h"

/**
 * _strlen_recursion - This program returns the length of a string
 * @s: pointer to string parameter
 * Return: string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
