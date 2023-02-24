#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
/**
 * print_number - A function that print number.
 * @n : Number
 * Return: nothing
 */
void print_number(int n)
{
	int i = 1000000000, j = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n == INT_MIN)
		{
			n++;
			j++;
		}
		if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	while (n / i == 0)
	{
		i = i / 10;
	}
	while (i != 1)
	{
		_putchar('0' + (n / i));
		n = n % i;
		i = i / 10;
	}
	_putchar('0' + (n % 10) + j);
	}
}
