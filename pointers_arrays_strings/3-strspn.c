#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of s
 * which consists entirely of characters in accept.
 *
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of characters in the initial segment of s
 * which consist only of characters from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	char *p1, *p2;
	unsigned int count = 0;

	for (p1 = s; *p1 != '\0'; p1++)
	{
		for (p2 = accept; *p2 != '\0'; p2++)
		{
			if (*p1 == *p2)
				break;
		}
		if (*p2 == '\0')
			break;

		count++;
	}
	return (count);
}
