#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * Description: This program prints all possible
 * different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int i = 0;
	while (i < 10)
	{
		int j = 0;
		while (j < 10)
		{
			int x = 0;
			while (x < 10)
			{
				if (x != j && j != i && i < j && j < x)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + x);
					if (x + j + i != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
