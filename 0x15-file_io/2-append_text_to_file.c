#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * Description: A function that appends text at the end of a file.
 * @filename: pointer to file
 * @text_content: pointer to text
 *
 * Return: 1 on success, -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
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
	close(i);
	return (1);
}
