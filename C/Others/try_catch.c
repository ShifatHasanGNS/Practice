#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

#define TRY if ((exception_value = setjmp(savebuf)) == 0)
#define THROW(_EXCEPTION_VALUE_) longjmp(savebuf, _EXCEPTION_VALUE_)
#define CATCH(_EXCEPTION_VALUE_) else if (exception_value == _EXCEPTION_VALUE_)
#define CATCHALL else

jmp_buf savebuf;
int exception_value = 0;

// --------------------------- //

double compute_avg(double *values, size_t length)
{
    if (length <= 0)
        THROW(1);

    double sum = 0;

    for (int i = 0; i < length; i++)
        sum += values[i];

    THROW(3);
    return sum / (double)length;
}

int main(int argc, char **argv)
{
    int arrlength = argc - 1;

    double *darr = malloc(sizeof(double) * arrlength);

    for (int i = 1; i < argc; i++)
        darr[i - 1] = atof(argv[i]);

    TRY
    {
        double avg = compute_avg(darr, arrlength);
        printf("Average: %lf \n", avg);
    }
    CATCH(3)
    {
        printf("Calculated perfectly, but throwing exception for fun.\nException_Value #3 \n");
    }
    CATCHALL
    {
        printf("There's no number to compute their average! \n");
    }

    return 0;
}