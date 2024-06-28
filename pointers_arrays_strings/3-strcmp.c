#include "main.h"

/**
 * _strcmp - function that compares two strings.
 *
 * @s2: pointeur 2
 * @s1: pointeur 1
 *
 * Return: pointeur 1 - pointeur 2
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}


	return (*s1 - *s2);
}
