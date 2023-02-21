#include <unistd.h>
#include "main.h"

void print_alphabet(void)
{
	for (char i ='a'; i <='z'; i++)
		_putchar(i);
	_putchar('\n');
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();

	return (0);
}
