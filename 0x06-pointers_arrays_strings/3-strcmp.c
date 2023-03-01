#include "main.h"
/**
  * _strcmp - compares two strings
  * @s1: First string
  * @s2: Second string
  *
  * Return: returns 0, - or + integer
  */
int _strcmp(char *s1, char *s2)
{
	int i;
	int a1;
	int a2;

	for (i = 0; ; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		a1 = (int) s1[i];
		a2 = (int) s2[i];
		if (a1 > a2)
			return (15);
		if (a2 > a1)
			return (-15);
	}
}
