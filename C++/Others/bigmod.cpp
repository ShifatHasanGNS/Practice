#include <bits/stdc++.h>
using namespace std;

int bigmod(int a, int b, int m) // int(a ^ b)  mod  m
{
    if (b == 0) return mod(1, m);
    int result = bigmod(a, b / 2, m);
    result = mod(result * result, m);
    if (b & 1) result = mod(result * a, m);
    return result;
}

int bigmod_str(char *num, int m) // string("num")  mod  m
{
    int result = 0, len = strlen(num);
    for (int i = 0; i < len; i++) result = (result * 10 + (int)num[i] - '0') % m;
    return result;
}