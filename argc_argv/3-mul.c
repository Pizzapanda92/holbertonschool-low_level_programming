#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * main - Point d'entrée du progra
 *
 * @argc: Nombre d'arguments passés au progra
 * @argv: Tableau de pointeurs vers les arguments
 *
 * Return: 0 ou error si le nombre dargument pas = 3.
 *
 */

int main(int argc, char **argv)
{
	int i;
	int j;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

		else
		{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		result = i * j;

		printf("%d\n", result);
		return (0);
		}
}
