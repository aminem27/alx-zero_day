#include "main.h"
#include <string.h>


/**
 * rev_string -  a function .
 * @s: an inout character pointer
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, len = 0;
	char *rev ="";

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len ; i++)
	{
		rev[i] = s[len - 1 - i];
	}
	rev[len] = '\0';
	s = rev;
	_putchar('\n');
}
