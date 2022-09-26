#include "main.h"

/**
 * _memcpy - a function that copies memory
 * @dest: copy to
 * @src: copy from
 * @n: no of bytes
 * Return: dest
 */
char *_memcpy(void *dest, const void *src, size_t in n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
