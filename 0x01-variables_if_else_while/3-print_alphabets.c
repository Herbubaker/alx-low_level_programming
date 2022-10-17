#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabets in lowwrcase and then uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a, b;

	for (a = 'a'; a <= 'z'; a++)
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(a, b)
	}

	putchar('/n')
	return (0);
}
