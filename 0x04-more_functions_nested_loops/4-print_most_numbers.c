#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9 followed by new line
 * uses _putchar
 * does not print 2 and 4
 * return void (success)
 *
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
	if (i != '2' && i != '4')
	_putchar(i);
	}
	_putchar('\n');

}
