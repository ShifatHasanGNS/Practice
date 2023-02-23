#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int len = s.length();

    if (len == 2)
        cout << 0 << endl;
    else
    {
        bitset<26> alphabet;

        for (int i = 1; i < (int)s.length(); i += 3)
            alphabet.set(s[i] - 'a');

        cout << alphabet.count() << endl;
    }
}

/*

A. Anton and Letters

Recently, Anton has found a set. The set consists of small English letters. Anton carefully wrote out all the letters from the set in one line, separated by a comma. He also added an opening curved bracket at the beginning of the line and a closing curved bracket at the end of the line.

Unfortunately, from time to time Anton would forget writing some letter and write it again. He asks you to count the total number of distinct letters in his set.

Input
The first and the single line contains the set of letters. The length of the line doesn't exceed 1000. It is guaranteed that the line starts from an opening curved bracket and ends with a closing curved bracket. Between them, small English letters are listed, separated by a comma. Each comma is followed by a space.

Output
Print a single number — the number of distinct letters in Anton's set.

Examples:
input
{a, b, c}
output
3

input
{b, a, b, a}
output
2

input
{}
output
0

*/