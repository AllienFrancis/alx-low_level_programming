#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: nothing
 */

void _puts(char *str)
{
	int x;
	int y;

	for (x = 0; str[x]; x++)
	{
		y = (int) str[x];

		_putchar(y);
	}

	_putchar(10 '\n');

}
