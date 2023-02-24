#include "main.h"
#include <unistd.h>
/**
 * print_square - A function that print diagonal.
 * @size :NUmber
 * Return: Nothing
 */
void print_square(int size)
{
	int i, j = 0;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
