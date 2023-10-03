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
	int a, cents, i;
	int change[] = {25, 10, 5, 2, 1};

	cents = 0;
	if (argc == 2)
	{
		a = atoi(argv[1]);
		if (a > 0)
		{
			while (a > 0)
			{
				for (i = 1; i < 5; i++)
				{
					while (a - 25 > 0 && a > 25)
					{
						a = a - 25;
						cents++;
					}
					while (a - change[i] > 0 && a < change[i - 1])
					{
						a = a - change[i];
						cents++;
					}
				}
			}
			printf("%d\n", cents);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
