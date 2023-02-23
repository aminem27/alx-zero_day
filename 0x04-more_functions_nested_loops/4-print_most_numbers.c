#include "main.h"
#include <unistd.h>
/**
 * print_most_numbers - A function that print n.
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
}
