#include "main.h"

/**
  * c_funct - function that prints chars.
  * @args: arg list
  * Return: 0
  */

int c_funct(va_list args)
{
	char charvar;

	charvar = (va_arg(args, int));

	_putchar(charvar);

	return (0);
}
