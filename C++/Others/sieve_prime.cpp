// Sieve Of Erathosthenes

#include <bits/stdc++.h>
using namespace std;

int prime[1000000], nPrime, mark[10000002];

void sieve(int n)
{
    int i, j, limit = sqrt(n)+2;
    mark[1] = 1;
    for(i=4; i<=n; i+=2) mark[i]=1;
    prime[nPrime++] = 2;
    for(i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i*i; j <= n; j += i*2) mark[j] = 1;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, count=0;
    cin >> n;
    sieve(n);
    cout << endl;
    while(prime[count] != 0)
    {
        cout << prime[count] << "  ";
        count++;
    }
    cout << "\n\nNumber Of Primes, From " << 1 << " to " << n << "  --->  " << count << endl;
    cout << endl;
    return 0;
}