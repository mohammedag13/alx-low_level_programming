#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, len = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_RDWR | O_APPEND);
	if (f == -1)
		return (-1);

	while (text_content && text_content[len])
		len++;

	write(f, text_content, len);
	close(f);
	return (1);
}
