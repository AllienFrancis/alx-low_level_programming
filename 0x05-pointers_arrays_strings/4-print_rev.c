#include "main.h"

/**
 * print_rev - printing a string in reversal
 * @s: pointer to a string
 * Return: nil
 */

void print_rev(char *s)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		;
	}
	for  (a = a - 1; a >= 0; a--)
	{
		b = (int) s[a];
		_putchar(b);

	}
	_putchar(10);

}
