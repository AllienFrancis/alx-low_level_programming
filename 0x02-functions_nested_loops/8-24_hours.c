#include "main.h"

/**
 * jack_bauer - print every minute ofo the day
 * Return: 0
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2;

	for (h1 = 0; h1 < 3; h1++)
	{
		for (h2 = 0; h2 < 10; h2++)
		{
			if ((h1 == 2) && (h2 >= 4))
				;
			else
			{
				for (m1 = 0; m1 < 6; m1++)
				{
					_putchar(h1 + 48);
					_putchar(h2 + 48);
					_putchar(58);
					_putchar(m1 + 48);
					_putchar(m2 + 48);
					_putchar(10);

				}
			}
		}
	}
}
