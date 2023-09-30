#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: This program prints all possible
 * different combinations of two digits
 * Return: 0
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i != j && i < j)
			{
				putchar('0' + i);
				putchar('0' + j);

				if (j + i != 17)
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
