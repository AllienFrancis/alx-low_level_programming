#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and in uppercase.
 * Return: 0 on exit
 */

int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}

	putchar('\n');

	return (0);

}
