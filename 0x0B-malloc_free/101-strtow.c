#include "main.h"

/**
 * len - returns length of str
 * @str: string to be counted
 *
 * Return: length of the string
 */

int len(char *str)
{
	int len = 0;
	
	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}

/**
 * num_words - counts the number of words in str
 * @str: string to be used
 *
 * Return: number of words
 */
int num_words(char *str)
{
	int i = 0, word = 0;

	while (i <= len(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
		{
			i++;
		}
		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			words += 1;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (words);
}
