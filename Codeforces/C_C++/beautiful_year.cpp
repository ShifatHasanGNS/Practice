#include <bits/stdc++.h>
using namespace std;

bool have_distinct_digits_in_year(int y)
{
    stringstream stream;
    string s;
    stream << y;
    stream >> s;

    bitset<10> digits;
    for (int i = 0; i < 4; i++)
        digits.set(s[i] - '0');

    int count = 0;
    for (int i = 0; i < 10; i++)
        count += digits[i];

    return (count == 4);
}

int main()
{
    int y; // 1000 ≤ y ≤ 9000
    cin >> y;

    y++;
    while (!have_distinct_digits_in_year(y))
        y++;
    
    cout << y << endl;
}

/*

A. Beautiful Year

It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.

Examples:
input
1987
output
2013

input
2013
output
2014

*/