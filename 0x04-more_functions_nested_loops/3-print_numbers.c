#include "main.h"
#include <unistd.h>
/**
 * print_numbers - A function that print n.
 * Return: Nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
}
