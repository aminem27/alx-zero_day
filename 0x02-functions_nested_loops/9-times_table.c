#include <unistd.h>
#include "main.h"

/**
 * times_table - Check description
 * Description: print table
 * Return: Nothing
 */

void times_table(void)
{
	int l ,c ,val;
	for (c = 0; c < 10; c++)
	{
		for (l = 0; l < 10; l++)
		{
			val = c * l;
			_putchar('0' + val);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('$');
		_putchar('\n');
	}


}
