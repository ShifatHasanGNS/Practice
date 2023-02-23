#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    cin >> text;

    if (text[0] >= 'a' && text[0] <= 'z')
        text[0] = (char)(text[0] - 32);
    
    cout << text << endl;
}

/*

A. Word Capitalization

Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 10^3.

Output
Output the given word after capitalization.

Examples:
input
ApPLe
output
ApPLe

input
konjac
output
Konjac

*/