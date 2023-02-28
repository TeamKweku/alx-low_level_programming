#include "main.h"
/**
  * rev_string - a function that reverses a strings
  * @s: a string to be reversed
  *
  * Returns: nothing
  */
void rev_string(char *s)
{
	int len;
	int n;
	char tmp;

	n = 0;
	len = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}
	len = n;

	for (n = len - 1; n >= len / 2; n--)
	{
		tmp = s[n];
		s[n] = s[len - n - 1];
		s[len - n - 1] = tmp;
	}
}
