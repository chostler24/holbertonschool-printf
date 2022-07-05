#include "main.h"

/**
  * _printf - function that prints strings, chars, and numbers.
  * @format: what format _printf is using
  * Return: the amount of characters _printf outputs
  */

int _printf(const char *format, ...)
{
	pf_fn pf_funct[] = {
		{"c", c_funct},
		{"s", str_funct},
		{"%", prcnt_funct},
		{"i", int_funct},
	};

	va_list args;

	int num = 0;

	va_start(args, format);

	num = get_pf(format, args, pf_funct);

	va_end(args);

	return (num);
}
