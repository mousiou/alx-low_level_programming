#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: This program prints all possible
 * different combinations of three digits
 * Return: 0
 */
int main()
{
	for(int i = 0 ; i < 10 ; i++)
	{
		for(int j = 0 ; j < 10 ; j++)
		{
			for(int x = 0 ; x < 10 ; x++)
			{
				if(x != j && j != i && i < j && j < x )
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
	return 0;
}
