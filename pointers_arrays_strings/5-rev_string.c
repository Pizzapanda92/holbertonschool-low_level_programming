#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: pointeur to chaine we print
 *
 */

void rev_string(char *s)
{
	int length = 0;
	char *begin_ptr, *end_ptr, temp;

	while (s[length] != '\0')
	{
		length++;
	}

	begin_ptr = s;
	end_ptr = s + length - 1;

	while (begin_ptr < end_ptr)
	{
		temp = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = temp;

		begin_ptr++;
		end_ptr--;
	}
}
