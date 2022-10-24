#include "main.h"

/**
 * swap_int - swaps the values of int a and int 0
 * @a: first int to swap
 * @b: second int to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
