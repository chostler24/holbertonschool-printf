#include "main.h"

/**
  * int_funct - function that prints an integer.
  * @args: arg list
  * Return: the amount of characters to be printed
  */

int int_funct(va_list args)
{
	int x;
	int i = 1;
	int cntr = 0;
	int num = va_arg(args, int);
	char mini[11] = {"-2147483648"};

	if (num < 0)
	{
		_putchar('-');
		cntr++;
		num = num * (-1);
	}

	if (num == INT_MIN)
	{
		for (x = 0; x <= 10; x++)
		{
			_putchar(mini[x]);
			cntr++;
		}

		return (cntr);
	}

	while ((num / i) >= 10)
	{
		i *= 10;
	}

	while (i >= 1)
	{
		_putchar((num / i) + '0');
		num %= i;
		i /= 10;
		cntr++;
	}

	return (cntr);
}
