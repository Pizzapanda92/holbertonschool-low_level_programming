#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * main - Point d'entrée du programm
 *
 * @argc: Nombre d'arguments passés au programm
 * @argv: Tableau de pointeurs vers les arguments
 *
 * Retourne : Si le nombre d'arguments n'est pas 3,
 * retourne 1. Sinon, retourne 0.
 */


int main(int argc, char **argv)
{
	int i;
	int j;
	int result;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

		else
		{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		result = i * j;

		printf("%d\n", result);
		}
	return (0);
}
