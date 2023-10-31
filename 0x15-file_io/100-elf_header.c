#include "main.h"

/**
 * main - displays the information contained in
 * the ELF header at the start of an ELF file.
 *
 * Description: A function that displays the information contained in
 * the ELF header at the start of an ELF file.
 * @ac: counter
 * @av: vector
 *
 * Return: 0 on success
 **/
int main(int ac, char **av)
{
	Elf64_Ehdr *my_header;
	int i, j, index, close_i;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(97);
	}
	i = open(av[1], O_RDONLY);
	if (i < 0)
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]), exit(98);
	j = read(i, my_header, sizeof(Elf64_Ehdr));
	if (j < 0)
	{
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", av[1]);
		exit(98);
	}
	for (index = 0; index < 4; index++)
	{
		if (my_header.e_ident[index] != 127 && my_header.e_ident[index] != 'E' &&
				my_header.e_ident[index] != 'L' && my_header.e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: this file is Not an ELF file\n");
			exit(98);
		}
	}
	printf("ELF Header:\n");
	close_i = close(i);
	if (close_i)
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", close_i);
	return (0);
}
