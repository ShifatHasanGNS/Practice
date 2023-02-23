#include <bits/stdc++.h>

int main()
{
    uint64_t n, m, a, d_n, d_m, r_n, r_m, ans;

    std::cin >> n >> m >> a;

    d_n = n / a;
    d_m = m / a;
    r_n = n % a;
    r_m = m % a;

    ans = d_n * d_m;
    
    if (r_n)
        ans += d_m;
    if (r_m)
        ans += d_n;
    if (r_n && r_m)
        ans++;

    std::cout << ans << std::endl;
}

/*

A. Theatre Square

Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

Input
The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

Output
Write the needed number of flagstones.

Examples:
input
6 6 4
output
4

36 // 16 = 2

36 - 2*16 = 36 - 32 = 4



*/