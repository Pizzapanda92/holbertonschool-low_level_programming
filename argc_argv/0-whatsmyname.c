#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * main - Programme qui imprime son nom suivi d'une nouvelle ligne
 *
 * @argc: Nombre d'arguments de la ligne de commande (non utilisé ici)
 * @argv: Tableau des arguments de la ligne de commande
 *
 * Return: 0 en cas de succè
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
