#include "main.h"

/**
 * _islower -function that checks for lowercase character.
 *
 * @c: char c
 *
 * Return: 0.
 */


int _islower(int c)

{

	if (islower(c))
	{
		return (1);
	}
	return (0);
}
