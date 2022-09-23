#include "main.h"

/**
 * leet - function that encode a string
 * @j: strings that wil be encoded
 *
 * Return: returns encoded string
 */
char *leet(char *j)
{
	int h = 0, k, y = 5;
	char am[5] = {'A', 'E', 'O', 'T', 'L',};
	char amc[5] = {'4', '3', '0', '7', '1'};

	while (j[h])
	{
		k = 0;

		while (k < y)
		{
			if (j[h] == am[k] || j[h] - 32 == am[k])
				j[h] = amc[b];
			k++;
		}
		h++;
	}
	return (j);
}
