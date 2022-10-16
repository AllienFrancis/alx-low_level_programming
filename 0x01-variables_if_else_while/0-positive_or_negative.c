#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - regular main functioon
 * This code determines if n is positive or negative
 * Return: 0 for success
 */

/* betty style doc for function main goes there */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() -  RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d\n is positive", n);
	}
	else if (n < 0)
	{
		printf("%d\n is negative", n);
	}
	else
	{
		printf("%d\n is zero", n);
	}

	return (0);

}
