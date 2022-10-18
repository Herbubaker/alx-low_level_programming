#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Prints alphabets in lowercase
 *
 * Return: Always (Success)
 */
void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
