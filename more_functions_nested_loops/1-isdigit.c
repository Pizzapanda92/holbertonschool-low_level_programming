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
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
