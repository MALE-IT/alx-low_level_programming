#include "main.h"
#include <stdio.h>

int check_Palindrome(char *s, int i, int len);

int _strlen_recursion(char *s);

/**
  *is_palindrome - find if the input string is a palindrome word
  *@s: string to be reversed
  *Return: 1 if a string is a palindrome and 0 if not
  *The strings of length 0 are considered as palindromes.
  */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_Palindrome(s, 0, _strlen_recursion(s)));
}

/**
  *_strlen_recursion - find the length of the string
  *@s: string to calculated length
  *Return: the length of the string
  *The strings of length 0 are considered as palindromes.
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
  *check_Palindrome - find if the input string is a palindrome word
  *@s: string to be checked
  *@i: iterator
  *@len: length of the string
  *Return: 1 if a string is a palindrome and 0 if not
  *The strings of length 0 are considered as palindromes.
  */
int check_Palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_Palindrome(s, i + 1, len - 1));
}
