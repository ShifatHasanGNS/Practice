#include <bits/stdc++.h>
using namespace std;

int power_int(int base, int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return base;
    int result = 1;
    while (n > 0)
    {
        if (n & 1)
            result *= base;
        base *= base;
        n /= 2;
    }
    return result;
}

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

int sum_of_divisor(int num)
{
    int sum = 1;
    num = abs(num);
    if (num == 1) return 1;
    else if (is_prime(num)) return (num+1);
    else
    {
        int p, c;
        for (p = 2; num != 1; p++)
        {
            if (is_prime(p) && num % p == 0)
            {
                c = 0;
                while (num % p == 0) { c++; num /= p; }
                sum *= ((power_int(p, (c+1)) - 1) / (p - 1));  //  [p^(c+1) - 1] / (p - 1)
            }
        }
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int num;
    while (true)
    {
        cout << ">>> ";
        cin >> num;
        cout << sum_of_divisor(num) << "\n" << endl;
    }
    return 0;
}