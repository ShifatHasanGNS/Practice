#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[101], t[101];
    cin >> s >> t;

    int len = strlen(s), count = 0, i = 0, j = len - 1;
    while (i < len && j >= 0)
    {
        if (s[i++] == t[j--])
            count++;
    }

    cout << ((count == len) ? "YES" : "NO") << endl;
}

/*

A. Translation

The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. However, it's easy to make a mistake during the «translation». Vasya translated word s from Berlandish into Birlandish as t. Help him: find out if he translated the word correctly.

Input
The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not consist unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

Output
If the word t is a word s, written reversely, print YES, otherwise print NO.

Examples:
input
code
edoc
output
YES

input
abb
aba
output
NO

input
code
code
output
NO

*/