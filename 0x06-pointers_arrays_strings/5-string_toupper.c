#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters of a  string
 * to upper case
 * @s: an input string
 * Return: char pointer to converted string
 */
char *string_toupper(char *s)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
