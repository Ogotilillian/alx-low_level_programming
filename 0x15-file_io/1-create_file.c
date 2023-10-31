#include "main.h"

/**
 * create_file - it is a function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i;
	int j;
	int k;

	if (!filename)
		return (-1);
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (i == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (j = 0; text_content[j]; j++)
		;
	k = write(i, text_content, j);
	if (k == -1)
		return (-1);
	close(i);
	return (1);
}
