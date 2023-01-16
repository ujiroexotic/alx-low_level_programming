#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the size of the memory to print
 * @b: the address of memory to print
 * @n: amount of times the byte will be written into the memory
 * Return: address of the memory where the byte was written
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
