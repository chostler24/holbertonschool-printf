#include "main.h"

/**
* get_pf - goes through functions and gets the correct
* one to use for printf
* @format: string
* @args: arg list
* @pf_funct: structure
*
* Return: the number of characters the function is printing
*/

int get_pf(const char *format, va_list args, pf_fn pf_funct[])
{
	int count = 0, i = 0, j, k = 0, num = 0;

	for (i = 0; format && format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count += 1;
		}
		else
		{
			for (j = 0; pf_funct[j].fn; j++)
			{
				if (format[i + 1] == pf_funct[j].fn[k])
				{
					num = pf_funct[j].func(args);
					count += num;
					i++;
					break;
				}
			}
			if (pf_funct[j].fn == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != 0)
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
					i++;
				}
				else
				{
					return (-1);
				}
			}
		}
	}
	if (format == NULL)
		return (-1);
	return (count);
}

