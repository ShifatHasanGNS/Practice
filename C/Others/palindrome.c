#include <stdio.h>

void main() {
    char text[65535]; // Max Unsigned Short = 65535
    printf(" Text: ", text);
    scanf("%s", text);

    unsigned short len = 0;
    while (text[len]) len++;
    unsigned short i = 0, limit = len>>1;
    _Bool is_palindrome = 1;
    
    while (i < limit) {
        if (text[i++] != text[--len]) {
            is_palindrome = 0;
            printf(" \"%s\" is not a palindrome. \n", text); break;
        }
    }
    if (is_palindrome) printf(" \"%s\" is a palindrome. \n", text);
}
