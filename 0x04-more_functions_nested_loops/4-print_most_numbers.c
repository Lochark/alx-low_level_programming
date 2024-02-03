#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9 followed by new line
 * uses _putchar
 * does not print 2 and 4
 * return void (success)
 *
 * */
void print_most_numbers(void)
{
	char i;
	i = '0';

	if(i <= '9' && (i != 2 && i != 4)){
		 _putchar(i);
		 i++;
	}
	_putchar('\n');

}
