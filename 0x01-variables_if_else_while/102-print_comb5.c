#include <stdio.h>

/**
 * main - main function
 * Description: This program creates 2 pairs of number
 * Return: 0
 */
int main(void)
{

	for (int i = 0; i <= 99; i++)
	{
		for (int j = i; j <= 99; j++)
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
