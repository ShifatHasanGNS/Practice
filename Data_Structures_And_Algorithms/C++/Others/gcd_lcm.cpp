// gcd()
// lcm()

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int max, min;
    a = abs(a);
    b = abs(b);
    max = (a > b) ? a : b;
    min = (a < b) ? a : b;
    if(min == 0) return max;
    else gcd(min, max%min);
    return -1;
}

int lcm(int a, int b)
{
    return (abs(a*b)/gcd(a, b));
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    cout << "GCD ---> " << gcd(a, b) << "\nLCM ---> " << lcm(a, b) << endl;
    return 0;
}