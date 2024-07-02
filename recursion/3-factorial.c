/**
 * factorial - Fonction récursive pour calcule
 * le factoriel d'un nombre entier positi
 *
 * @n: entier positif dont on veut calculer le factoriel
 *
 * Return: le factoriel de n,
 * qui est le produit de tous les entiers positifs jusqu a n.
*/


int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n <= 0)
	{
		return (-1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
