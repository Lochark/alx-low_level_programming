#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- entry point
 *
 * description: assigns a random number to variable n
 *
 * prints the last digit of variable n
 *
 * Return: always return 0 (success)
 */
int main(void)
{
	int n;

	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	if (k > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, k);
	if (k == 0)
		printf("Last digit of %d is %d and is 0\n", n, k);
	if (k < 6 && k != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);

	return (0);
}
