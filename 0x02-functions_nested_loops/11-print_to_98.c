#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - this will print all the natural numbers froom n to 98.
 * @n: the number too start counting from to 98
 * Return: nothing.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
