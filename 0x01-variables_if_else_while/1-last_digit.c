#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print th last digit of a randomly generated number
 * and whether it is greaterthan 5, less than 6 and not zero
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("Last digit of %d is %d is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, a);
	}
	return (0);
}

