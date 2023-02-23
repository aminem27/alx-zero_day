#include <stdio.h>
#include "main.h"

/* betty style doc for function main goes there */
/**
 * positive_or_negative - Entry point
 * @n :Number integer
 * Return: Nothing(Success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
