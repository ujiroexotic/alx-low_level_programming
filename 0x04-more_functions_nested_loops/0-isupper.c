#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: Variable test
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
i	else
	{
		return (0);
	}
}
