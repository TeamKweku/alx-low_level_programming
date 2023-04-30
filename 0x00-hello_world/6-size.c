#include <stdio.h>
/**
  * main - Program to print the various sizes of
  * types in the C Programming language
  * Return: returns 0 on success
  */

int main(void)
{
	char a;
	int x;
	long int y;
	long long int z;
	float c;

	printf("Size of a char: %i byte(s)\n", sizeof(a));
	printf("Size of an int: %i byte(s)\n", sizeof(x));
	printf("Size of a long int: %d byte(s)\n", sizeof(y));
	printf("Size of a long long int: %d byte(s)\n", sizeof(z));
	printf("Size of a float: %d byte(s)\n", sizeof(c));

	return (0);
}
