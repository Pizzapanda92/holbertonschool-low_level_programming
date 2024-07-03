#include "main.h"

/**
 * _pow_recursion - Calcule x élev�la puissance y de manière récursive
 *
 * @x: la base
 * @y: l'exposant
 *
 * Return: Le résultat de x^y. Retourne -1 si y est inférieu0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return -1;
	}
	if (y == 0)
	{
		return 1;
	}
	return x * _pow_recursion(x, y - 1);
}
