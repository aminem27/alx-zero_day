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
        long u1 = 1, u2 = 2, aux, S = 3;
	
	for (i = 2; i < 50; i++)
	{
		aux = u2;
		u2 = u2 + u1;
		u1 = aux;
		if (u2 % 2 == 0 && S < 4000000)
		S = S + u2;
		if (S > 4000000)
			break;
	}
	printf("%ld\n", S);
	return (0);
}
