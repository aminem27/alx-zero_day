#include "main.h"
#include <unistd.h>
/**
 * print_triangle - A function that print triangle.
 * @size :NUmber
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i, j = 0;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= size - 1 - i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
