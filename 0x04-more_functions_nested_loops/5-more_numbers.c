#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14
 *
 * loop runs 10 times
 *
 * return success
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
		if (j >= 10)
		{
		_putchar ((j / 10) + '0');
		}
	_putchar ((j % 10) + '0');
		}
	_putchar ('\n');

	}

}
