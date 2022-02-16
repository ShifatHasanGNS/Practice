#include <stdio.h>

typedef unsigned long long int ulli; // Format Specifier: %llu

ulli tau(ulli n)
{
    if (n == 0 || n == 1 || n == 2) return n;
    ulli count = 1, i = 2;
    for (; i*i <= n; i++) if (n % i == 0) count++;
    return 2*count;
}

ulli sigma(ulli n)
{
    if (n == 0 || n == 1) return n;
    if (n == 2) return 3;
    ulli sum = 1+n, i = 2;
    for (; i*i <= n; i++) if (n % i == 0) sum += (i + n/i);
    return sum;
}

ulli product(ulli n)
{
    if (n == 0 || n == 1 || n == 2) return n;
    ulli p = 1, i = 1;
    for (; i*i <= n; i++) if (n % i == 0) p *= n;
    return p;
}

void main()
{
    ulli n;
    printf("\n n = ");
    scanf("%llu", &n);

    printf("\n");
    printf("     tau(%u) = %llu\n", n,     tau(n));
    printf("   sigma(%u) = %llu\n", n,   sigma(n));
    printf(" product(%u) = %llu\n", n, product(n));
}