#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>


/**
  * struct pf_fn - printf formatting struct.
  * @frm: struct format
  * @fnctn: which printf function to use
  */

typedef struct pf_fn
{
	char *frm;
	int (*fnctn)(va_list args);
} pf_fn;


int _printf(const char *format, ...);
int _putchar(char c);
int c_funct(va_list args);
int str_funct(va_list args);
int prcnt_funct(va_list args);
int dig_funct(va_list args);
int int_funct(va_list args);
int get_pf(const char *format, va_list args, pf_fn pf_funct[]);

#endif
