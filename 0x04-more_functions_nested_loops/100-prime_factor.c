#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, n, val = 612852475143;

	n = val / 2;
	for (i = 2; i < n; i++)
	{
		if (val % i == 0 && i != val)
		{
			printf("%ld ", i);
			val = val / i;
		}
		else
			if (i == val)
			{
				printf("%ld", i);
				break;
			}
	}
	printf("\n");

	return (0);
}
