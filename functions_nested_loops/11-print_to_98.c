#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @n: num
 *
 * Return: void.
 */


void print_to_98(int n)
{
	int num = n;

	if (n < 98)
	{
		while (num <= 98)
		{
			printf("%d", num);

			if (num < 98)
			{
				printf(", ");
			}
			num++;
		}
	}
	else if (n > 98)
	{
		while (num >= 98)
		{
			printf("%d", num);
			if (num > 98)
			{
				printf(", ");
			}
			num--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
