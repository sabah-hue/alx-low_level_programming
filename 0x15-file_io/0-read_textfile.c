#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 *
 * Description: A function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer to file
 * @letters:  number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t out_bytes;
	int i;
	char *file_size;

	if (filename == NULL)
		return (0);

	i = open(filename, O_RDONLY);
	if (i < 0)
		return (0);
	file_size = malloc(sizeof(*file_size) * (letters + 1));
	if (file_size == NULL)
		return (0);
	out_bytes = read(i, file_size, letters);
	if (out_bytes < 0)
		return (0);
	out_bytes = write(STDOUT_FILENO, file_size, out_bytes);
	free(file_size);
	close(i);
	return (out_bytes);
}
