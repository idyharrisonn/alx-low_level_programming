#include <unistd.h>
/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 * Return on success the number of characters written
 * on error, -1 is returned and errno is set appropraitely
 */
int _putchar(char c)
{
        return write(1, &c, 1);
}
