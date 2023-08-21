#include "main.h"
/**
 * swap_int - swap the values og two integers
 * @a: first input
 * @b: second input
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
