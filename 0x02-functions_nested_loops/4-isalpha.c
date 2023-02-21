#include <unistd.h>
#include "main.h"

/**
 * _isalpha - Check description
 * Description: test alpha
 * @c : c integer a number
 * Return: int 0 or 1.
 */

int _isalpha(int c)
{
	int value = 0;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		value = 1;
	return (value);
}
