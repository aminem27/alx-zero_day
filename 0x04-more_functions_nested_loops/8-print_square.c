#include "main.h"
#include <unistd.h>
/**
 * print_square - A function that print diagonal.
 * @size :NUmber
 * Return: Nothing
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
