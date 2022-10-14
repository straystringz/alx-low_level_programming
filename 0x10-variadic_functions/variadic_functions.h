#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/*
* File: variadic_functions.h
* Desc: Header file containing prototypes for all functions
*/
#include <stdarg.h>
/**
* struct printer - A new struct type defining a printer.
* @symbol: A symbol representing a data type.
* @print: a pointer function to a function
*/
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
