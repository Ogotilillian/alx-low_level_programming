#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content:  is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int j;
	int k;

	if (!filename)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	if (text_content)
	{
		for (j = 0; text_content[j]; j++)
			;
		k = write(i, text_content, j);
		if (k == -1)
			return (-1);
	}
	close(i);
	return (1);
}
