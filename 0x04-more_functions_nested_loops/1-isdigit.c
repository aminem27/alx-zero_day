#include "main.h"

/**
 * _isdigit - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is degit or 0 otherwise
 */
int _isdigit(int c)
{
	int i = 0;

	if (c <= 57 && c >= 48)
	{
		i = 1;
	}
	return (i);
}
