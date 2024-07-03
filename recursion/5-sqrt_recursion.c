#include "main.h"

/**
 * _sqrt_aux - Fonction auxiliaire pour trouver la racine carrée
 * @n: nombre dont on cherche la racine carrée
 * @i: compteur pour tester les valeurs
 *
 * Return: la racine carrée de n si elle est naturelle, -1 sinon
 */

int _sqrt_aux(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_aux(n, i + 1));
}

/**
 * _sqrt_recursion - Trouve la racine carrée naturelle d'un nombre
 * @n: nombre dont on cherche la racine carrée
 *
 * Return: la racine carrée de n si elle est naturelle, -1 sinon
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_aux(n, 0));
}
