#include <unistd.h>
#include "main.h"

/**
 * _islower - Check description
 * Description: test lowercase
 * @c : c integer a number
 * Return: int 0 or 1.
 */

int _islower(int c)
{
	int value = 0;

	if (c >= 97 && c <= 122)
		value = 1;
	return (value);
}
