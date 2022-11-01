#include "main.h"

/**
 * _memset - Fills the 1st n bytes of the memory area pointed by @s
 * @s: A pointer to the memory area to be filled.
 * @b: constant byte
 * @n: The number of bytes to be filled
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
