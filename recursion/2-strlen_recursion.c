#inculde "main.h"

/**
 * _strlen_recursion - Calcule la longueur d'une chaîne de caractères de manière récurs
 * @s: Pointeur vers la chaîne de caractères dont on veut calculer la longueu
 *
 * Return: Le nombre de caractères dans la chaîn
 */

int _strlen_recursion(char *s)
{

	int count = 0;

	if (*s == '\0')
	{
		return (count);
	}

	count++;

	return (count + _strlen_recursion(s + 1));
}
