#include <stdio.h>

/**
 * main - This program prints all single digit numbers of base
 * Description: 10 starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
