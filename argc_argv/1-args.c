#include "stdio.h"
#include "main.h"

/**
 * main - Programme qui imprime le nombre d'arguments passé
 *
 * @argc: Nombre d'arguments de la ligne de commande
 * @argv: Tableau des arguments de la ligne de commande
 *
 * Return: 0 en cas de succes
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
