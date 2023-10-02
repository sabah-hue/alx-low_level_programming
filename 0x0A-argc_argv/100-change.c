#include <stdio.h>

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
	int a, count;

	if (argc == 2)
	{
		a = atoi(argv[1]);
		if (a > 0)
		{
			while (a > 0)
			{
				if (a - 25 > 0)
				{
					a = a - 25;
					count++;
				}
				else if (a - 10 > 0 && a < 25)
				{
					a = a - 10;
					count++;
				}
				else if (a - 5 > 0 && a < 10)
				{
					a = a - 5;
					count++;
				}
				else if (a - 2 > 0 && a < 5)
				{
					a = a - 2;
					count++;
				}
				else if (a - 1 > 0 && a < 2)
				{
					a = a - 1;
					count++;
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
