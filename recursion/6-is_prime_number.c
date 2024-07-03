#include "main.h"

/**
 * _is_prime_aux - Vérifie de manière récursive si un nombre est premier
 *
 * @n: Le nombre a vérifie
 * @i: Le diviseur a tester
 *
 * Return: 1 si le nombre est premier, 0 sinon
 */

int _is_prime_aux(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_is_prime_aux(n, i - 1));
}

/**
 * is_prime_number - Vérifie si un nombre e
 * premier en utilisant _is_prime_au
 *
 * @n: Le nombre a vérifie
 *
 * Return: 1 si le nombre est premier, 0 sinon
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_is_prime_aux(n, n / 2));
}
