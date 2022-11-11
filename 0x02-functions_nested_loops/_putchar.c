#include <unistd.h>

/**
 * _putchar - a func that writes a char to std out
 * @c: char input
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
