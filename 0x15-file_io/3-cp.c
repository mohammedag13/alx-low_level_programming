#include "main.h"

#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

/**
 * main - checks the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int source, dest, on_close, r, w;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);

	source = open(argv[1], O_RDONLY);
	if (source == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

	while (1)
	{
		r = read(source, buffer, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
		if (r > 0)
		{
			w = write(dest, buffer, r);
			if (w == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		}
		else
				break;
	}
		on_close = close(source);
		if (on_close == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source), exit(100);
		on_close = close(dest);
		if (on_close == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
		return (0);
}
