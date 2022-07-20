#include "main.h"
/**
 * pali - checks if astring is palindrome
 * @s: the string
 * @length: the strings length
 * @start: the starting index
 *
 * Return: 0 or 1
 */
int pali(char *s, int length, int start)
{
	if (start >= length)
		return (1);
	else if (s[start] == s[length])
		return (pali(s, --length, ++start));

	return (0);
}
/**
 * _strlen_recursion - gets the string length
 * @s: the string
 *
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if astring is palindrome
 * @s: the string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);

	return (pali(s, length - 1, 0));
}
