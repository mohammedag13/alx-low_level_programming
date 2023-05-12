#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: filename
 * @letters: the number of letters it should read and print
 * Return: number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	r = read(f, buffer, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
		return (0);

	free(buffer);
	close(f);
	return (w);
}

