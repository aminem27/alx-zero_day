#include <unistd.h>
#include "main.h"

/**
 * som - Check description
 * Description: add numbers
 * Return: Nothing
 */

void som (void)
{
	int val = 0, i;

	for (i = 1; i < 1024; i++)
		if (i % 3 || i % 5)
			val= val + i;
	printf("%d", val);
}
