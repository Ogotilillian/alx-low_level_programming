#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: pointer in the first string
 * @s2: pointer in the second string
 * Return: value less than 0 if string is less than the other
 * greater than 0 if the string is greater and 0 if its equal
 */

int _strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	compare_value = s1[counter] - s2[counter];
	return (compare_value);
}
