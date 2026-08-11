#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Prototype */
int _printf(const char *format, ...);

/* Helper functions */
int print_char(char c);
int print_string(char *str);
int print_int(int n);
int print_unsigned_base(unsigned int num, int base, int uppercase);

#endif
