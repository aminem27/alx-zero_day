#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - A function that print all its parameters.
 * @format: number of parameters
 * @...: Other parameters
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	char *string;
	int num = 0, i;

	va_start(ap, format);
	if (*format == NULL)
	{
		printf("\n");
		return (num);
	}
	else
		for (i = 0; format[i] != '\0'; i++)
			if(format[i] != '\')
				{
					_putchar(format);
					num++;
				}
			else
				switch (format[i+1])
				{
					case 'n':
						_putchar('\n');
						num++;
						i++;
						break;
					case 'a':
                                                _putchar('\a');
                                                num++;
                                                i++;
                                                break;
					case 'b':
                                                _putchar('\b');
                                                num++;
                                                i++;
                                                break;
					case 't':
                                                _putchar('\t');
                                                num++;
                                                i++;
                                                break;
					case 'f':
                                                _putchar('\f');
                                                num++;
                                                i++;
                                                break;
					case 'r':
                                                _putchar('\r');
                                                num++;
                                                i++;
                                                break;
					case '\'':
                                                _putchar('\'');
                                                num++;
                                                i++;
                                                break;
					case '"':
                                                _putchar('\"');
                                                num++;
                                                i++;
                                                break;
					case '\\':
                                                _putchar('\\');
                                                num++;
                                                i++;
                                                break;
					case '%':
                                                _putchar('%');
                                                num++;
                                                i++;
                                                break;
					default :
                                                i++;
                                                break;
}
