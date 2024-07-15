#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <unistd.h>
#include <ctype.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif  
