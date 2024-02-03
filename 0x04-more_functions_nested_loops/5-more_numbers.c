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
	char i = '0', j;

	while (i <= '9')
	{
		j = '0';

		while (j <= '9')
	{
		_putchar (j);
		j++;
	}
		j = '0';

		while (j <= '4')
	{
			_putchar (j + '0');
			j++;
		}

		_putchar ('\n');
		i++;
	}

}
