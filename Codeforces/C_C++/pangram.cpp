#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;
    cin >> s;

    char c;
    bitset<26> alphabet;

    for (int i = 0; i < n; i++)
    {
        c = toupper(s[i]);
        alphabet.set(c - 'A');
    }

    cout << (alphabet.count() == 26 ? "YES" : "NO") << endl;
}

/*

A. Pangram

A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once. Pangrams are often used to demonstrate fonts in printing or test the output devices.

You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.

Input
The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.

The second line contains the string. The string consists only of uppercase and lowercase Latin letters.

Output
Output "YES", if the string is a pangram and "NO" otherwise.

Examples:
input
12
toosmallword
output
NO

input
35
TheQuickBrownFoxJumpsOverTheLazyDog
output
YES

*/