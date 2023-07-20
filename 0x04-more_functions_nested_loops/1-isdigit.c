#include "main.h"
/**
 * _isdigit - This program Checks for a digit (0-9)
 * @c: variable holding the digit
 * Return: 0 if False, 1 if True
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
