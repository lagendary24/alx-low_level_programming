#include <stdio.h>
/**
 * Desciptio: main - prints the sizeof many var types
 * Return: 0 if Success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %d byte(s)\n",sizeof(a));
	printf("Size of an int: %d byte(s)\n",sizeof(b));
	printf("Size of a long int: %d byte(s)\n",sizeof(d));
	printf("Size of a float: %d byte(s)\n",sizeof(e));
	return (0);
}
