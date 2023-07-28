#include "main.h"

/**
 * string_toupper - This program changes all lowercase letter
 * of a string to uppercase.
 *@n: cadena de caracteres.
 * Return: n.
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
