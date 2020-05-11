#include <iostream>
#include <map>
#include <algorithm>

bool f(int x, int y)
{
    return x > y;
}

using namespace std;

int main()
{
    map<int, int> mii;

    mii[1] = 100;
    mii[2] = -1;
    mii[3] = 200;
    mii[1051651] = 1;

    map<char, int> mci;

    string name = "Shifat Hasan";

    for (char c : name)
    {
        mci[c]++;
    }
    cout << "'a' --> " << mci['a'] << "\n's' --> " << mci['s'] << endl;

    return 0;
}