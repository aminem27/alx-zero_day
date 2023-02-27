#include "main.h"

/**
 * swap_int : a function that swaps the values of two integers.
 * @a: An integer input pointer
 * @b: An integer input pointer
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
