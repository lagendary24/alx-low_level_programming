#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed the buffer.
 * 
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size;
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar ('\n');
}
