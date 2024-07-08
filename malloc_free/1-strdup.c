#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to be copied.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient memory
 *         was available or if str is NULL.
 */

char *_strdup(char *str)
{
	char *src;
	char *p;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
		len++;

	src = malloc(len + 1);
	if (src == NULL)
	{
		return (NULL);
	}

	p = src;

	while (*str)
	{
		*p++ = *str++;
	}
	*p = '\0';

	return (src);
}
