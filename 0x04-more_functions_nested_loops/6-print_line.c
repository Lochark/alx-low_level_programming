#include "main.h"

/**
 * print_line -a function that draws a straight line
 *
 * only use _putchar
 *
 * @n: input integer
 *
 * return- result (0) success
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar ('_');
		}

	}
	_putchar ('\n');
}
