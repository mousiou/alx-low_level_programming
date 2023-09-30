#include <stdio.h>

/**
 * main - main function
 * Description: This program creates 2 pairs of number
 * Return: 0
 */
int main(void)
{
	
	int i = 0;
	while (i <= 99)
	{
		int j = 0;
		while (j <= 99)
		{
			if (j != i)
			{
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(' ');
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);

				if (i * 100 + j != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
