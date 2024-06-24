#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for uppercase character
 *
 *@c: variable
 *
 *Return: 1 if is num , 0 if is otherwise
 */

int _isdigit(int c)
{
	if ((c >= 'a' &&  c <= 'z') || (c >= 'A' &&  c <= 'Z'))
	{
		return (0);
	}

	else
	{
		return (1);
	}
}
