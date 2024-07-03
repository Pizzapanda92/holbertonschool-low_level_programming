#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * main - Programme qui affiche tous les arguments qu'il reçoi
 *
 * @argc: Le nombre d'arguments passés au programme
 * @argv: Un tableau de chaînes de caractèrereprésentant les argument
 *
 * Return: 0 si le programme se termine correctement
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}
	return (0);
}
