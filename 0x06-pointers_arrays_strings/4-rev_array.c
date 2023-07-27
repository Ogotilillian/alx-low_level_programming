#include "main.h"

 /**
  * reverse_array - function that reverses the content of an array of integers.
  * @a: pointer to array
  * @n: numberof elements of array
  * This function takes an array of integers and its size as input
  * and reverses the order of its elements in-place.
  *
  * Example:
  * int arr[] = {1, 2, 3, 4, 5};
  * reverse_array(arr, 5);
  * // The array arr will now be: {5, 4, 3, 2, 1}
  */

void reverse_array(int *a, int n)
{
	int temporary, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temporary = a[counter];
		a[counter++] = a[n];
		a[n--] = temporary;
	}
}
