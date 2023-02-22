#include <unistd.h>
#include <stdio.h>
/**
 * main - Check description
 * Description: execute function
 * Return: 0
 */

int main(void)
{
	int i;
	long u1 = 1, u2 = 2, aux;

	printf("%d, ", u1);
	printf("%d", u2);
	for (i = 2; i < 50; i++)
	{

		aux = u2;
		u2 = u2 + u1;
		u1 = aux;
		printf(", %ld", u2);
	}

	return (0);
}
