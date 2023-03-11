#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	int i = 0;

	if (c <= 90 && c >= 65)
	{
		i = 1;
	}
	return (i);
}
