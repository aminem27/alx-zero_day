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
	int b, c, d;

	for (a = 0; a <= 9 ; a++)
	{
		for (b = 0; b <= 9 ; b++)
		{
			for (d = a; d <= 9 ; d++)
			{
				for (c = b + 1; c <= 9 ; c++)
				{
					if (!(a == 0 && b == 0 && c == 1 && d == 0))
					{
						putchar(',');
						putchar(' ');
					}
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + d);
					putchar('0' + c);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
