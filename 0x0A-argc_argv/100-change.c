#include <stdio.h>
#include <stdlib.h>

/**
 * main -  entry point.
 *
 * Description: a function prints min number of coins to change a money.
 * @argc: variable store number of command line
 * @argv: array of character
 *
 * Return: 0 in success, 1 in error.
 **/
int main(int argc, char *argv[])
{
	int a, count, i;
	int x[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		a = atoi(argv[1]);
		if (a > 0)
		{
			while (a > 0)
			{
				for (i = 1; i < 5; i++)
				{
					if (a - 25 > 0)
					{
						a = a - 25;
						count++;
					}
					else if (a - x[i] > 0 && a < x[i - 1])
					{
						a = a - x[i];
						count++;
					}
				}
			}
			printf("%d\n", count);
		}
		printf("0\n");
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
