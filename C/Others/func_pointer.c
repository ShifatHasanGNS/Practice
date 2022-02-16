#include <stdio.h>

/*
** Apply Right-Left Rule
 * Identifier: foo
 * right: nothing
 * left: pointer
 * right: function that takes 3 ints
 * left: returns int *
**/
// int * (*foo) (int, int, int)

typedef int (*operation_ptr)(int, int);

int add(int a, int b) {return a+b;}
int mul(int a, int b) {return a*b;}

int do_something(operation_ptr op, int x, int y)
{
    return op(x, y);
}

int main(int args, char **argv)
{
    int result_add = do_something(add, 5, 34);
    int result_mul = do_something(mul, 5, 34);

    printf("result_add = %d\nresult_mul = %d\n", result_add, result_mul);

    return 0;
}