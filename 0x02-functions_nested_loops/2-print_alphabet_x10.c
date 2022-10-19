#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * prints 10 times the alphabet in lowercase
 *
 * Return: Always (Success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int n;

	n = 1;
	while (n <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		n++;
	}
}
