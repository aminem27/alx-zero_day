#include <unistd.h>
#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *word = "_putchar";
	int i;
		for (i = 0; i <= strlrn(word); i++)
		{
			_putchar(word[i]);
		}
	_putchar('\n');

	return (0);
}
