#include <unistd.h>
#include <stdio.h>

/**
 * som- Check description
 * Description: add numbers
 * Return: Nothing
 */

void som(void)
{
	int val = 0, i;

	for (i = 1; i < 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			val = val + i;
	printf("%d\n", val);
}

/**
 * main - Check description
 * Description: execute function som
 * Return: 0
 */

int main(void)
{
	som();
	return (0);
}
