#include <stdio.h>

/**
 * main - prints the alphabet in reverse.
 * Return: 0 on exit
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);

}