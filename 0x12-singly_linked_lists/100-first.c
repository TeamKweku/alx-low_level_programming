#include <stdio.h>
/**
  * print_first - function that prints a string before
  * the main function is executed
  *
  * Return: Nothing
  */

__attribute__((constructor))
void print_first(void)
{
	printf("You' are beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
