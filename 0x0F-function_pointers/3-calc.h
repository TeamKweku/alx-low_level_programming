#ifndef CALC_H
#define CALC_H

/**
  * struct op_t - struct data type that have two elements
  * @s: a pointer to string
  * @function: a function pointer
  *
  * Description: op_t struct stores a pointer to a string
  * and also a function pointer
  */
typedef struct op_t
{
	char *s;
	int (*function)(int, int);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
