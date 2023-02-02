#include <stdio.h>
#include <stdarg.h>

int print(const char *format, ...)
{
    va_list args;
    int done;

    va_start(args, format);
    done = vfprintf(stdout, format, args);
    va_end(args);

    return done;
}

void main()
{
    print("Something we don't want to say.\n");
    print("I say, \"Hello World!\"\n");
}