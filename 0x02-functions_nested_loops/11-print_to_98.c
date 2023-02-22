#include <unistd.h>
#include<stdio.h>
#include "main.h"

/**
 * print_to_98 - Check description
 * Description:increment to 98 or decrement
 * @n :Number
 * Return: Nothing
 */

void print_to_98(int n)
{
	int val;

	val = n;
	if (n < 98)
	{
		while (val <= 98)
		{
			printf("%d", val);
			if (val != 98)
				printf(", ");
			val++;
		}
	}
	else
		while (val >= 98)
		{
			printf("%d", val);
			if (val != 98)
				printf(", ");
			val--;
		}
}
