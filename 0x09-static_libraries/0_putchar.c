#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * @c: charater to print
 *
 * Return: 1 if success, -1 if error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
