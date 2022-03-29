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

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
				break;

			b++;
		}

		if (needle[b] == '\0')
			return (haystack + a);

		a++;
	}

	return ('\0');
}
