#include "main.h"

/**
 * _strstr - locates string
 * @haystack: string in which search
 * @needle: searched string
 *
 * Description: This function locates a substring
 * Return: a pointer to the begining of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;

			j++;
		}

		if (needle[j] == '\0')
			return (haystack + i);

		i++;
	}

	return ('\0');
}
