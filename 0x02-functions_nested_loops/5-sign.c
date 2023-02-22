#include <unistd.h>
#include "main.h"

/**
 * print_sign - Check description
 * Description: test sign
 * @n : c integer a number
 * Return: int 0 or 1.
 */

int print_sign(int n)
{
	int value = 0;

	if (n > 0)
	{
		_putchar('+');
		value = 1;
	}
	if (n < 0)
	{
		_putchar('-');
		value = -1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	return (value);
}
