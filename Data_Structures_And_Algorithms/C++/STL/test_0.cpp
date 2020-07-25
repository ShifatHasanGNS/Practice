#include <iostream>
#include <set>
#include <algorithm>

bool f(int x, int y)
{
    return x > y;
}

using namespace std;

int main()
{
    set<pair<int, int>> s;

    s.insert({401, 450});
    s.insert({10, 20});
    s.insert({2, 3});
    s.insert({30, 400});

    /* 
      s = {{2, 3},
           {10, 20},
           {30, 400},
           {401, 450}}
    */

    int point = 401;

    auto it = s.upper_bound({point, INT64_MAX});

    cout << (*it).first << ", " << (*it).second << endl;

    if(it == s.begin())
        cout << "It's not present in any the intervals..." << endl;
    else
    {
        it--;
        pair<int, int>  current = *it;
        if (current.first <= point && point <= current.second)
            cout << "Yes, it's present ---> " << current.first << ", " << current.second << endl;
        else cout << "It's not present in any the intervals..." << endl;
    }

    return 0;
}