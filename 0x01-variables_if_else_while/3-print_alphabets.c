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
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}

	putchar('/n');
	
	return (0);
}
