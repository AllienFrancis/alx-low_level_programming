#include "main.h"

/**
 * main - print alphabets in lowercase
 * end with a new line.
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
