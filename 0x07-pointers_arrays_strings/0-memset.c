#include "main.h"

/**
 * _memset - fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value of n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;

	return (s);
}
