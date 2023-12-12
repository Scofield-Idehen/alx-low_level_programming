#include "main.h"
#include <stdio.h>

/**
 * _strstr -  function that locates a substring.
 *
 * @haystack: initial string
 * @needle: substring
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	char *result;
	char *aux;

	while (*haystack != '\0')
	{
		result = haystack;
		aux = needle;

		while (*aux == *haystack && *aux != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			aux++;
		}
		if (*aux == '\0')
			return (result);
		haystack = result + 1;
	}
	return (NULL);
}
