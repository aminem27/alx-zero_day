#include "main.h"
#include <unistd.h>
/**
 * print_diagonal - A function that print diagonal.
 * @n :NUmber 
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j = 0;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar('\\');
					j++;
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
