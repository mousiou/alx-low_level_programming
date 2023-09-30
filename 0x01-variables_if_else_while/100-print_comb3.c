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
	int i = 0;
	while (i < 10)
	{
		int j = 0;
		while (j < 10)
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
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
