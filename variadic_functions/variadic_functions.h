#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <unistd.h>
#include <ctype.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif  