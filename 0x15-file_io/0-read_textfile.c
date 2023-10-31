#include "main.h"

/**
 * read_textfile - the function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: filename.
 * @letters: number of letters it could read and print.
 * Return: actual number of letters it could read and print if the file can not
 * be opened or read, if the filename is NULL, and it fails to write, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t rd, wr;
	char *buff;

	if (!filename)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);
	rd = read(i, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);
	close(i);
	free(buff);
	return (wr);
}
