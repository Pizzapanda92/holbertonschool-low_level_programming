#include "main.h"

/**
 * _print_rev_recursion - imprime une chaine a
 * l'envers a l'aide de la recursion.
 *
 * @s: pointeur vers la chaine de caracteres a imprimer.
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
			return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
