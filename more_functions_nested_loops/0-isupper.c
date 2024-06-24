#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: variavle
 *
 * Return: 1 if is Maj , 0 if is min
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}

		else
		{
		return (0);
		}
}
