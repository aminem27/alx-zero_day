#include <unistd.h>
#include "main.h"

/**
 * _abs - Check description
 * Description: test sign
 * @n : n integer a number
 * Return: int 0 or 1.
 */

int _abs(int n)
{
	int value = 0;

	if (n > 0)
	{
		value = n;
	}
	if (n < 0)
	{
		value = -n;
	}
	return (value);
}

