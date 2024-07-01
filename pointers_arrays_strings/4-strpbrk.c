#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *p1, *p2;

	for (p1 = s; *p1 != '\0'; p1++)
	{
		for (p2 = accept; *p2 != '\0'; p2++)
		{
			if (*p1 == *p2)
			{
				return (p1);
			}
		}
	}
	return (NULL);
}
