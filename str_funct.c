#include "main.h"

/**
  * str_funct - function that prints strings
  * @args: arg list
  * Return: amount of chars in string
  */

int str_funct(va_list args)
{
	int strcount;

	char *s;

	s = (va_arg(args, char *));

	if (s == 0)
	{
		s = "(null)";
	}

	for (strcount = 0; s[strcount] != 0; strcount++)
	{
		_putchar(s[strcount]);
	}

	return (strcount);
}
