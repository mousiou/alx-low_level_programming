#include "main.h"

/**
 * _islower - this program checks if input
 * @c: is a lowercase character
 * Return: if false 0, if ture 1
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
