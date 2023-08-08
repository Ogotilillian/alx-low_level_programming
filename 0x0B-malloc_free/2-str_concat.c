#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first pointer to a null terminated string
 * @s2: second pointer to a null terminated string
 * Return: pointer to a newly allocated memory space,
 * if memory allocation fails it returns NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *pt_str;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	pt_str = malloc(len1 + len2 + 1);
	if (pt_str == NULL)
	{
		return (NULL);
	}
	strcpy(pt_str, s1);
	strcat(pt_str, s2);
	return (pt_str);
}
