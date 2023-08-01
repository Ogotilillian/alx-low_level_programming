#include "main.h"
#include <stdio.h>

 /**
  * reverse_array - reverses the content of an array of integers.
  * @a: array
  * @n: number of elements of array
  *
  * Return: reversed array
  */

void reverse_array(int *a, int n)
{
	int i, j, k;

	j = 0;
	k = n - 1;
	while (j < k)
	{
		i = *(a + j);
		*(a + j) = *(a + k);
		*(a + k) = i;
		j++;
		k--;
	}
}
