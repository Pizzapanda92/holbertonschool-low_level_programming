#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s : valeur
 *
 * Return: length resulte
 */

int _strlen(char *s)

{
	int length = 0;

	for (; *s != '\0'; s++)
	{
	length++;
	}
	return (length);
}
