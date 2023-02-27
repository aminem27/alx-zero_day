#include "main.h"
#include <string.h>


/**
 * _puts -  a function.
 * @str: an inout character pointer
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		len++;
	}
	_putchar('\n');
}
