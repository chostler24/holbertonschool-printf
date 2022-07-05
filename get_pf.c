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
	int cntr = 0, i = 0, x, n = 0, dig = 0;

	for (i = 0; format && format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			cntr += 1;
		}
		else
		{
			for (x = 0; pf_funct[x].frm; x++)
			{
				if (format[i + 1] == pf_funct[x].frm[n])
				{
					dig = pf_funct[x].fnctn(args);
					cntr += dig;
					i++;
					break;
				}
			}
			if (pf_funct[x].frm == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != 0)
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					cntr += 2;
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
	return (cntr);
}
