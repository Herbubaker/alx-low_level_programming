#include <stdio.h>
#include "main.h"
/**
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
