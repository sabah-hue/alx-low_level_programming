#include "main.h"

/**
 ** main -  copies the content of a file to another file.
 *
 * Description: A function that  copies the content of a file to another file.
 * @ac: counter
 * @av: vector
 *
 * Return: 1 on success, -1 on failure
 **/
int main(int ac, char **av)
{
	int file_from, file_to, j;
	ssize_t n;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while (n)
	{
		n = read(file_from, buffer, sizeof(buffer));
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		j = write(file_to, buffer, n);
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	file_from = close(file_from);
	if (file_from)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	file_to = close(file_to);
	if (file_to)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (1);
}
