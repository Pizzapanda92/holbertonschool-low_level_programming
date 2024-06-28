#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: temp
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	char *test = temp;

	int i;

	for (i = 0; dest[i] != '\0';)
	{
		*dest++ = *test++;
	}
	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (temp);
}
