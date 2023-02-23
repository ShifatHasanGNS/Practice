#include <bits/stdc++.h>
using namespace std;

int64_t linear_sum(int64_t n)
{
    return (n & 1) ? (n * ((n + 1) >> 1)) : ((n >> 1) * (n + 1));
}

int main()
{
    int64_t n, sum = 0;
    cin >> n;

    int64_t m = n >> 1;

    sum = (linear_sum(m) << 2) - linear_sum(n);

    cout << sum << endl;
}

/*

A. Calculating Function

For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 +...+ (( - 1)^n)*n

Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line.

Examples:
input
4
output
2

input
5
output
-3

Note:
f(4) =  - 1 + 2 - 3 + 4 = 2

f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3

*/