#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase,
 * Description: followed by a new line, except q and e
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
	if (ch != 'e' && ch != 'q')
	{
	putchar(ch);
	}
	}
	putchar('\n');
	return (0);
}
