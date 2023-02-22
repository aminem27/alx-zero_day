#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - Check description
 * Description: print last digit
 * @n : n integer a number
 * Return: number
 */

int print_last_digit(int n)
{
	int value = n % 10;

	_putchar('0' + value);
	return (value);
}
