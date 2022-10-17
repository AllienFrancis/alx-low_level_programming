#include <stdio.h>

/**
 * main - prints all base 16 numbers
 * Return: 0 on exit
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);

}
