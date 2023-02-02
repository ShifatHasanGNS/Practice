#include <stdio.h>
#include <math.h>

typedef unsigned long long int ulli;

_Bool is_perfect_square(ulli n)
{
    ulli x = sqrtl(n);
    return (x*x == n);
}

ulli isqrt(ulli n)
{
    ulli t = 0, x = n / (1 << ((unsigned int)log2(n) >> 1));
    while (t != x)
    {
        t = x;
        x = (x + n/x) >> 1;
        if (x > t) break;
    }
    return t;
}

void main()
{
    ulli n;
    printf("\n n = ");
    scanf("%llu", &n);

    printf("\n");
    printf(" isqrt(%llu) = %llu\n", n, isqrt(n));
    
    if (is_perfect_square(n)) printf(" %llu is a perfect square.\n", n);
    else printf(" %llu is not a perfect square.\n", n);
}