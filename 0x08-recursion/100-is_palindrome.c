#include "main.h"

/**
 * is_palindrome - Returns if a string is palindrome
 * @s: the string value to be checked
 *
 * Return: integer value
 */
int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}

/**
 * check_palindrome - check if a string is palindrome
 * @s: the string value to be checked
 * @1g: is the length of the string
 * @i: is the index
 *
 * Return: integer value
 */
int checkp(int i, int 1g, char *s)
{
	if (1g > 0)
	{
		if (s[i] = s[1g])
		{
			return (checkp(i + 1, 1g - 1, s));
		}
		else if (s[i] != s[1g])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * _strlen_recursion - Get the length of a string
 * @s: the string to get the length
 *
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0)
	return (1 + _strlen_recursion(s + 1));
}
