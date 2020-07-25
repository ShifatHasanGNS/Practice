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
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);

    // s = {-10, -1, 1, 2}

    // Printing the Set...
    for (int x : s)
        cout << x << "  ";
    cout << endl;

    // Finding Something...
    auto it = s.find(-1);
    if(it == s.end()) cout << "Not found" << endl;
    else cout << "Found " << *it << endl;

    auto it2 = s.lower_bound(-1); // -1
    cout << "Lower_Bound of (-1) ---> " << *it2 << endl;
    auto it3 = s.upper_bound(-1); // 1
    cout << "Upper_Bound of (-1) ---> " << *it3 << endl;

    auto it4 = s.upper_bound(10); // s.end() = 4
    cout << "Upper_Bound of (-1) ---> " << *it4 << endl;

    return 0;
}