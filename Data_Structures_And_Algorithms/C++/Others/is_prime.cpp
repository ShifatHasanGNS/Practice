#include <bits/stdc++.h>
using namespace std;

bool is_prime(int p)
{
    if (p <= 1) return false;
    if (p == 2) return true;
    if (p == 3) return true;
    if (p % 2 == 0) return false;
    if ((p-1) % 6 == 0 || (p+1) % 6 == 0)
    {
        for (int i = 3; i*i <= p; i++)
            if (p % i == 0) return false;
        return true;
    }
    else return false;
}

int main(int argc, char const *argv[])
{
    int n;
    while(true)
    {
        cout << ">>> ";
        cin >> n;
        if(is_prime(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
