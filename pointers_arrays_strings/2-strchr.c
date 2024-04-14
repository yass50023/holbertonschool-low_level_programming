
Here's the corrected _strchr function with adherence to the provided requirements, including a fix for the compilation error:

c
Copy code
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 *
 * @s: Pointer to the string to search
 * @c: Character to locate
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;

	if (s == NULL)
		return NULL;

	while (*ptr != '\0')
	{
		if (*ptr == c)
			return ptr;
		ptr++;
	}

	if (c == '\0')
		return ptr;

	return NULL;
}
