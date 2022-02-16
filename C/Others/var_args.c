#include <stdio.h>
#include <stdarg.h>

// # Not_Allowed: char, short, float ; # Allowed: int, double, Pointer(*)

void print_ints(int num, ...)  // num = number of variable arguments
{
    va_list args;
    va_start(args, num);

    for (int i = 0; i < num; i++)
    {
        int value = va_arg(args, int);
        printf("%d: %d\n", i, value);
    }

    va_end(args);
}

void main()
{
    print_ints(3, 24, 26, 312);
    print_ints(2, 256, 512);
    print_ints(7, 1, 2, 3, 4, 5, 6, 7);
}