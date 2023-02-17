#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b;
	int n = 1;

	for (a = 0; a <= 9 ; a++)
	{
		for (b = n; b <= 9 ; b++)
		{
			if (!(a == 0 && b == 1))
			{
				putchar(',');
				putchar(' ');
			}
			putchar('0' + ch);
			putchar('0' + b);
		}
		n++
	}
	putchar('\n');

	return (0);
}
