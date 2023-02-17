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
	int b, c;
	int n = 1;
	int m = 2;

	for (a = 0; a <= 9 ; a++)
	{
		for (b = n; b <= 9 ; b++)
		{
			for (c = m; c <= 9 ; c++)
			{
				if (!(a == 0 && b == 1 && c == 2))
				{
					putchar(',');
					putchar(' ');
				}
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
			}
			m++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
