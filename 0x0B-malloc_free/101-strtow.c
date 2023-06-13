#include <stdlib.h>
#include "main.h"
/**
 * count - count no of words in a string
 * @s: string
 * Return: no of words
 */

int count(char *s)
{
	int num, a, b;

	num = 0;
	b = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			num = 0;
		else if (num == 0)
		{
			num = 1;
			b++;
		}
	}
	return (b);
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: success
 */

char **strtow(char *str)
{
	char **max, *tee;
	int i, a = 0, lens = 0, words, c = 0, start, end;

	while (*(str + lens))
		lens++;
	words = count(str);
	if (words == 0)
		return (NULL);
	max = (char **) malloc(sizeof(char *) * (words + 1));
	if (max == NULL)
		return (NULL);
	for (i = 0; i <= lens; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tee = (char *) malloc(sizeof(char) * (c + 1));
				if (tee == NULL)
					return (NULL);
				while (start < end)
					*tee++ = str[start++];
			*tee = '\0';
				max[a] = tee - c;
				a++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	max[a] = NULL;
	return (max);
}
