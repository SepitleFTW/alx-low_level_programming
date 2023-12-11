#include <unistd.h>

/**
 * _isupper - checks uppercase letters
 * @c: check characters
 *
 *Return: 1 else 0
*/

int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
            return (1);

    else
        return (0);
}
