#include "main.h"
/**
 * get_size -A function that calculates the size of argument
 * @format: string format to be printed
 * @j: list of arguments to be printed
 * Return: precision
 */
int get_size(const char *format, int *j)
{
	int curr_j = *j + 1;
	int size = 0;

	if (format[curr_j] == 'l')
		size = S_LONG;
	else if (format[curr_j] == 'h')
		size = S_SHORT;
	if (size == 0)
		*j = curr_j - 1;
	else
		*j = curr_j;
	return (size);
}
