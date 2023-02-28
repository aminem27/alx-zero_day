#include "main.h"
#include <string.h>


/**
 * rev_string -  a function .
 * @s: an inout character pointer
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	for (i = 0; i >= len / 2; i++)
	{
		s[i] = s[len - 1 - i];
	}
	_putchar('\n');
}
