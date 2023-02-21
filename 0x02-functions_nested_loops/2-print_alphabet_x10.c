#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char i = 'a';
	int j = 0;

	while (j < 10)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		j++;
	}
	_putchar('\n');
}
