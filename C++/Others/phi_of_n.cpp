#include <bits/stdc++.h>
using namespace std;

int phi(int n)
{
    int ret = n;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            // checking whether (n mod i) = 0 or not
            while (n % i == 0) n /= i; // dividing all the factors of 'i'
            // same as: ret * (1 - 1/p)
            ret -= ret/i;
        }
    }
    if (n > 1) ret -= ret/n; // there can be only one prime greater... then sqrt(n) that divides 'n'
    return ret;
}

int main()
{
    int n;
    cin >> n;
    cout << "phi(" << n << ") = " << phi(n) << endl;
    return 0;
}