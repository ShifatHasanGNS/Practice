#include <bits/stdc++.h>
using namespace std;

bool is_leapyear(int year)
{
    return (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) ? true : false;
}

int main(int argc, char const *argv[])
{
    int year;
    while(true)
    {
        cout << ">>> ";
        cin >> year;
        if(is_leapyear(year)) cout << year << "  --->  Leapyear" << endl;
        else cout << year << "  --->  Not Leapyear" << endl;
    }
    return 0;
}