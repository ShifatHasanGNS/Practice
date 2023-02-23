#include <bits/stdc++.h>

int main()
{
    int x;
    std::string text;

    std::cin >> x;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear buffer before taking newline
    getline(std::cin, text);

    std::cout << x << "\n"
              << text << std::endl;
}