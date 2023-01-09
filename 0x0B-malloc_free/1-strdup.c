#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer allocated space, memory string passed.
 * @str: pointer to string being duplicated.
 *
 * Return: NULL if str is NULL.
 * pointer to duplicated string on success.
 * NULL if memory was insufficient.
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
