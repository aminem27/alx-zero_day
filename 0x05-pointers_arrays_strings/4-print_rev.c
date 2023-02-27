#include "main.h"
#include <string.h>


/**
 * print_rev -  a function .
 * @s: an inout character pointer
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len < 0)
	{
		_putchar(s[len]);
		len--;
	}
}
