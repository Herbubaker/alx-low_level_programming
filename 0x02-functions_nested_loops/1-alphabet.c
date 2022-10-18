#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
	return (0);
}
