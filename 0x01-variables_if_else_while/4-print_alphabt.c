#include <stdio.h>

/**
 * main - Entry point
 * A to Z excluding q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 'a'; b <= 'z'; b++)
	if (b != 'e' && b != 'q')
	{
		putchar(b)
	}
	putchar('\n');
	return (0);
