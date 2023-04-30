#include <stdio.h>
#include <unistd.h>
/**
  * main - A program that prints some line of code to the stdout
  * Return: The return value for sucess is 1
  */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
