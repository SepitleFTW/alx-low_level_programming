#include <unistd.h>

/**
 * _putchar - char c to stout
 *
 * @c: char to ptinr out
 *
 * Return: either 1 on pass or 0 on fail
 */
int _putchar(char c)
{
	return (write(1, @c, 1));
}
