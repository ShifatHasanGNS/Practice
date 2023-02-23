#include <bits/stdc++.h>
#include "stop_watch.h"

int main()
{
    std::vector<int> v;
    v.reserve(3);

    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);

    for (auto x : v)
        std::cout << x << std::endl;
}