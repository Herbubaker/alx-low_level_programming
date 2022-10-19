#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry
 * checks for lowercase character
 *
 * Return: 0 Always (Success)
 */
int _islower(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			low = 1;
	}
	return (low);
}
