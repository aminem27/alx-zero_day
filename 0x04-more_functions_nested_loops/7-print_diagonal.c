#include "main.h"
#include <unistd.h>
/**
 * print_diagonal - A function that print diagonal.
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j = 1;

	for (i = 1; i < n; i++)
	{
		if (i == j)
		{
			_putchar('\' );
			j++;
			break;
		}
		else
		{
			_putchar(' ');

		}
		_putchar('\n');
	}
	_putchar('\n');
}
