#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c character distinctly
 * @c: the character to print
 *
 * Return: on succes 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
