#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *Greater than or lesser than six
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
		printf("%d last digit of n is n % 10 is greater than 5\n", n % 10);
	else if (n % 10 == 0)
		printf("%d last digit of n is n % 10 is zero\n", n % 10);
	else
		printf("%d last digit of n is n % 10 is less than 6 and not 0\n", n % 10);
	return (0);
}
