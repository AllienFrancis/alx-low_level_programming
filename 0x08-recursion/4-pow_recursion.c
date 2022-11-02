#include "main.h"

/**
 * _pow_recursion - x ^ y
 * @x: the integer number
 * @y: the power
 * Return: powa
 */
int _pow_recursion(int x, int y)
{

	long int powa;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		powa = x * _pow_recursion(x, y - 1);
	}
	return (powa);
}
