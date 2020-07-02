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

int prime_factorize(int num)
{
    int p, c;
    vector<pair<int, int>> pf;
    for (p=2; p*p <= num; p++)
    {
        if (is_prime(p) && num % p == 0)
        {
            c = 0;
            while (num % p == 0)
            {
                c++;
                num /= p;
            }
            pf.push_back(make_pair(p, c));
        }
    }
}

int main(int argc, char const *argv[])
{
    int num;
    while(true)
    {
        cout << ">>> ";
        cin >> num;
        
    }
    return 0;
}