#include <stdio.h>
#include <stdlib.h>

/**
 * main -  Adds positive numbers passed as arguments.
 *
 * @argc: The number of command-line arguments
 * @argv: Array of strings containing the command-line arguments
 *
 * Return: 0 if successful,
 * 1 if there is a non-digit character in the arguments
 */
int main(int argc, char *argv[])
{

	int somme = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		somme = somme + atoi(argv[i]);
	}
	printf("%d\n", somme);
	return (0);
}
