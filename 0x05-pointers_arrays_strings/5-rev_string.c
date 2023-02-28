#include "main.h"
#include <string.h>


/**
 * rev_string -  a function .
 * @s: an inout character pointer
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, l = 0;
	char *rev = s;

	while (s[l] != '\0')
		l++;
	for (i = 0; i < l; i++)
	{
		rev[i] = s[l - i - 1];
	}
	s = rev;
}
