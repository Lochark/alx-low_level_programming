#include <stdio.h>

/**
 *main - entry point
 *
 * description: print alphabet in lowercase and then uppercase
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	char ch;
	char c;

	for (ch = 'a'; ch <= 'z'; c++)
		putchar(ch);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar ('\n');
	return (0);
}
