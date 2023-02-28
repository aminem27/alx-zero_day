#include "main.h"
#include <stdio.h>


/**
 * rev_string -  a function .
 * @s: an inout character pointer
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, l = 0;
	char a, z;

	while (s[l] != '\0')
		l++;
	l--;
	i = 0;
	while (i < l)
	{
		a = s[i];
		z = s[l];
		s[i++] = z;
		s[l--] = a;
	}
}
