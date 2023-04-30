# 0x0F. C - Function pointers
## This repo contains source code on the use cases of function pointers and its implementatioin
#### 0-print_name.c - a function that prints a name of a provided char * invoking a function through a pointer
#### 1-array_iterator.c - a function that executes a function given as a parameter on each element of an array
#### 2-int_index.c - function that searches for an integer, and returns index of first occurance of return of a function call 
#### Task 3 contains multiple files on the implementation of a program that performs simple operations based on the commandline argument passed to main function
- 3-calc.h: File contains all the function prototypes and data structures used by the program
- 3-op_functions.c: Contains all the 5 following functions implemented for the main program
	- int op_add(int a, int b);
	- int op_sub(int a, int b);
	- int op_mul(int a, int b);
	- int op_div(int a, int b);
	- int op_mod(int a, int b);
- 3-get_op_func.c: Contains the function that selects the correct function to perform the operation asked by the user
- 3-main.c: contains the main function 

