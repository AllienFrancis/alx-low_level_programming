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
		printf("Number is positive %d\n", n);
	}
	else if (n < 0)
	{
		printf("Number is negative %d\n", n);
	}
	else
	{
		printf("Number is zero %d\n", n);
	}

	return (0);

}
