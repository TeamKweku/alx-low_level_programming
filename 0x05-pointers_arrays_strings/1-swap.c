/**
  * swap_int - a function that swaps two values
  * @a: first value
  * @b: second value
  *
  * Return: nothing
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
