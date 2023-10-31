#include "main.h"

/**
 * create_file -  creates a file.
 *
 * Description: A function that creates a file.
 * @filename: pointer to file
 * @text_content: pointer to string need to write in file
 * Return: 1 on success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	int i, j;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (i < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(i);
		return (1);
	}
	j = write(i, text_content, strlen(text_content));
	if (j < 0)
		return (-1);
	close(j);
	return (1);
}
