#include <unistd.h>
#include "main.h"

/**
 * times_table - Check description
 * Description: print table
 * Return: Nothing
 */

void times_table(void)
{
	int l, c, val;

	for (c = 0; c < 10; c++)
	{
		for (l = 0; l < 10; l++)
		{
			val = c * l;
			if (val /10 != 0)
				_putchar('0' + (val / 10));
			else
				_putchar(' ');
			_putchar('0' + (val % 10));
			if (l != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}


}
