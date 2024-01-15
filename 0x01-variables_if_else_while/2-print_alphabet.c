#include <stdio.h>
/**
 * main- entry point
 *
 * printing the alphabet in small letters
 *
 * Return: Always return 0 (success)
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
