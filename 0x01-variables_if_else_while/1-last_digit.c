#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program prints a random number.
 * Description: it checks the last digit of the number
 * the string is, followed by
 * if the last digit of n is greater than 5:
 * the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0:
 * the string and is less than 6 and not 0
 * followed by a new line
 * Return: a string
*/

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	printf("Last digit of ");
	if (lastd > 0)
	{
	printf("%d and is greater than 5", lastd);
	}
	if else(lastd < 0)
	{
	printf("%d and is less than 6 and not 0", lastd);
	}
	else
	{
	printf("%d and is 0", lastd);
	}
	return (0);
}
