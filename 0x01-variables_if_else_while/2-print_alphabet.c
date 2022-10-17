#include <stdio.h>

/**
 *main - Entry point
 *Description: Prints alphabets in lowercase
 *
 *Return: Always return 0: Success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
