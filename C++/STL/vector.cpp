#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int x, int y)
{
    return x > y;
}

int main()
{
    vector<int> v = {11, 2, 3, 14};

    cout << v[1] << endl;

    sort(v.begin(), v.end()); // Complexity --> O(NlogN)

    // v = {2, 3, 11, 14}

    bool present = binary_search(v.begin(), v.end(), 3); // true
    cout << present << endl;
    present = binary_search(v.begin(), v.end(), 4); // false
    cout << present << endl;

    v.push_back(100); // Append --> 100
    // v = {2, 3, 11, 14, 100}

    present = binary_search(v.begin(), v.end(), 100); // true

    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    // v = {2, 3, 11, 14, 100, 100, 100, 100, 100}
    v.push_back(123);
    // v = {2, 3, 11, 14, 100, 100, 100, 100, 100, 123}

    vector<int>::iterator it1 = lower_bound(v.begin(), v.end(), 100); // >= [4]
    vector<int>::iterator it2 = upper_bound(v.begin(), v.end(), 100); //  > [9]

    cout << *it1 << "  " << *it2 << endl;
    cout << it2 - it1 << endl; // 5

    sort(v.begin(), v.end(), f);

    for (int x : v)
        cout << x << "  ";
    cout << endl;

    return 0;
}
