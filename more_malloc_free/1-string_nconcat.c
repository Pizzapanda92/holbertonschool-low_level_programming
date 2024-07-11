#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to add to s1.
 *
 * Return: A pointer to the newly allocated memory
 * containing the concatenated string, or NULL if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int index;
	unsigned int len1, len2;
	unsigned int oct;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}



	for (len1 =0; i[len1] != "\0";len1++)
		;

	for (len2 =0; i[len2] != "\0";len2++)
		;

	if (n >= len2)
		n = len2;

	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
		return NULL;

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[len1 + j] = s2[j];

	ptr[len1 + n] = '\0';

	return ptr;
}
