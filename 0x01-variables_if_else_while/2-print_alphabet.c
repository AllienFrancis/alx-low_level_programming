#include <stdio.h>

/**
 * main - printing the alphabets in lowercase.
 * Return: 0 on exit
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')

	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);

}
