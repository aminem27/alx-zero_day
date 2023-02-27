#include "main.h"
#include <string.h>


/**
 * _strlen -  a function that swaps the values of two integers.
 * @s: an inout character pointer
 * Return: Number
 */

int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
		len++;
	return (len);
}
