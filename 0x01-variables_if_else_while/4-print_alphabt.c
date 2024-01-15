#include <stdio.h>
/**
 * main- entry point
 *
 * printing the alphabet in small letters
 *
 * do not print q and e
 *
 * Return: Always return 0 (success)
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch != 'q'; ch != 'e'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
