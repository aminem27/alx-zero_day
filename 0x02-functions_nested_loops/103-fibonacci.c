#include <unistd.h>
#include <stdio.h>
/**
 * main - Check description
 * Description: execute function
 * Return: 0
 */

int main(void)
{
	long u1 = 1, u2 = 2, aux, S = 3;

	while (S < 4000000)
	{
		aux = u2;
		u2 = u2 + u1;
		S = S + u2;
		u1 = aux;
		printf("u1=%ld u2=%ld s=%ld \n", u1, u2, S);
	}
	printf("%ld\n", S);
	return (0);
}
