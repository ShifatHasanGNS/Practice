#include <stdio.h>

typedef unsigned long long int ulli;

ulli tau(ulli n)
{
    if (n == 0 || n == 1 || n == 2) return n;
    ulli count = 1, i = 2, j = 4;
    while (j <= n)
    {
        if (n % i == 0)
        {
            if (j == n) return (2 * count) + 1;
            count++;
        }
        i++; j = i * i;
    }
    return 2 * count;
}

ulli sigma(ulli n)
{
    if (n == 0 || n == 1) return n;
    if (n == 2) return 3;
    ulli sum = 1 + n, i = 2, j = 4;
    while (j <= n)
    {
        if (n % i == 0)
        {
            if (j == n) return sum + i;
            sum += (i + n / i);
        }
        i++; j = i * i;
    }
    return sum;
}

ulli product(ulli n)
{
    if (n == 0 || n == 1 || n == 2) return n;
    ulli p = 1, i = 1, j = 1;
    while (j <= n)
    {
        if (n % i == 0)
        {
            if (j == n) return p * i;
            p *= n;
        }
        i++; j = i * i;
    }
    return p;
}

void main()
{
    ulli n;
    printf("\n n = ");
    scanf("%llu", &n);
    printf("\n");
    printf("     tau(%llu) = %llu\n", n,     tau(n));
    printf("   sigma(%llu) = %llu\n", n,   sigma(n));
    printf(" product(%llu) = %llu\n", n, product(n));
}
