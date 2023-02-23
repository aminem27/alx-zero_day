#include "main.h"
#include <unistd.h>
/**
 * print_line - A function that print lines.
 * @n : Number of lines
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');

}
