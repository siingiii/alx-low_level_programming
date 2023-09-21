#include "main.h"

/**
  * reverse_array - function name
  * @a: parameter one
  * @n: parameter two
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int k, r;

	for (k = 0; k < n--; k++)
	{
	r = a[k];
	a[k] = a[n];
	a[n] = r;
	}
}
