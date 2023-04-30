/**
  * _strlen - function that returns the len of a string
  * @s: the sting to be checked
  *
  * Return: an int value for len of string
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
