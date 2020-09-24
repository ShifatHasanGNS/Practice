#include <bits/stdc++.h>
using namespace std;

bool is_prime(int p)
{
    if (p <= 1) return false;
    if (p == 2) return true;
    if (p == 3) return true;
    if (p % 2 == 0) return false;
    if (p % 3 == 0) return false;
    if ((p - 1) % 6 == 0 || (p + 1) % 6 == 0)
    {
        for (int i = 3; i * i <= p; i++)
            if (p % i == 0) return false;
        return true;
    }
    else return false;
}

int number_of_divisors(int num)
{
    int n = 1;
    num = abs(num);
    if (num == 1) return 1;
    else if (is_prime(num)) return 2;
    else
    {
        int p, c;
        for (p = 2; num != 1; p++)
        {
            if (is_prime(p) && num % p == 0)
            {
                c = 0;
                while (num % p == 0) { c++; num /= p; }
                n *= (c + 1);
            }
        }
    }
    return n;
}

int main(int argc, char const *argv[])
{
    int num;
    while (true)
    {
        cout << ">>> ";
        cin >> num;
        cout << number_of_divisors(num) << "\n" << endl;
    }
    return 0;
}