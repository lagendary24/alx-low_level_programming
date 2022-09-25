#include "main.h"
#include <stdio.h>

/**
 * print_buffer - c funtion that prints the content of an
 * inputted number of bytes from a buffer.
 * prints 10 bytes per line.
 * starts with the position of the first byte in hexidecimal (8 chars),
 * starting with `0`.
 * Each line shows the hexidecimal content (2 chars) of the buffer,
 * 2 bytes at a time, seperately by space.
 * Each line shows the content of the buffer.
 * print the byte if it printable; if not, prints `.`.
 * Each line ends with a new line `\n`.
 * If the inputted byte size is 0 or less, the function only prints a new line.
 * @b: number of bytes
 * @size: size of the byte
 */
void print_buffer(char *b, int size)
{
	int byte, index;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("08x: ", byte);

		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				printf(" ");

			else
				printf("%02", *(b + index + byte));

			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}

		for (index = 0; index < 10; index++)
		{
			if ((index + bytes) >= size)
				break;

			else if (*(b + index + byte) >= 31 &&
				*(b + index + byte) <= 126)
				printf("%c", *(b + index + byte));
			else
				printf(".");
		}
		if (byte >= size)
			continue;

		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
