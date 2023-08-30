#include <stdlib.h>
#include "main.h"

/**
* count_word - Helper function counts number of words in string.
* @s: check if char is a numeric digit.
* Return: Word number
*/

int count_word(char *s)
{
int i, j, k;

i = 0;
k = 0;
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == ' ')
i = 0;
else if (i == 0)
{
i = 1;
k++;
}
}
return (k);
}
/**
* **strtow - function that splits a string into words.
* @str: pointer to a null-terminated string
* Return: a pointer to an array
*/

char **strtow(char *str)
{
char **a, *p;
int i, j = 0, len = 0, words, c = 0, start, end, k;

while (str[len] != '\0')
len++;
words = count_word(str);
if (words == 0)
return (NULL);
a = (char **)malloc(sizeof(char *) * (words + 1));
if (a == NULL)
return (NULL);
for (i = 0; i < len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
if (c)
end = i;
p = (char *)malloc(sizeof(char) * (c + 1));
if (p == NULL)
{
while (j > 0)
free(a[--j]);
free(a);
return (NULL);
}
for (k = 0, start = i - c; start < end; k++, start++)
{
p[k] = str[start];
}
p[k] = '\0';
a[j] = p;
j++;
c = 0;
if (c++ == 0)
start = i;
}
a[j] = NULL;
return (a);
}
