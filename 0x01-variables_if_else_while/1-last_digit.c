#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 5)
	{
		printf("Last digit of n is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("last digit of n is 0\n");
	}
	else
	{
		printf("Last digit of n is less than 6 and not 0\n");
	}
	return (0);
}
