#include "main.h"

/**
 * print_line -a function that draws a straight line
 *
 * only use _putchar
 *
 * return- result (0) success
 */
void print_line(int n)
{
	int n;

	for (n = 0; n <= 10; n++) 
	{
		if (n <= 0)
		{
			_putchar ("\n");
		}
		_putchar (n);
	}
	_putchar ("\n");
}
