#include "function_pointers.h"
/**
  * print_name - function that calls back a function pointer
  * to print a string
  * @name: pointer to string
  * @f: pointer to a function
  *
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
