#include "main.h"

/**
 * print_line - draws a straightline in the terminal
 * @n: - number/length of line in _ s
 */

void print_line(int n)
{
	if (n <= 0)
		;
	else
	{
		for (; n > 0; n--)
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
