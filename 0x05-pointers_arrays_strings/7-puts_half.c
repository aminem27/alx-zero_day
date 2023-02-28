#include "main.h"

/**
 * puts_half - a function ,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, n, i = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;
	for (i = n; i < len; i++)
	_putchar(str[i]);

	_putchar('\n');
}
