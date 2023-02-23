// Author: Md. Shifat Hasan
#include <stdio.h>
#include <string.h>

int main()
{
    int max_len;
    // input max length
    printf("max string length: ");
    scanf("%d", &max_len);

    char text[max_len];
    // input text to reverse word by word
    fflush(stdin); // to flush standard input buffer
    printf("input string: ");
    fgets(text, max_len, stdin); // 'stdin' to get string input safely from terminal

    int len = strlen(text), not_first_word = 0, last_space_id = len - 1, i, j;
    for (i = len - 2; i >= 0; i--)
    {
        if (text[i] == ' ' || i == 0)
        {
            // skip multiple spaces
            if (text[i + 1] == ' ')
            {
                last_space_id = i;
                continue;
            }
            // print word
            if (not_first_word)
                printf(" ");          // executes except for the first word
            j = (i == 0) ? i : i + 1; // j = word's starting index
            while (j < last_space_id) // word's last index = last_space_id - 1
            {
                if (text[j] != ' ') // to skip extra-spaces that weren't handled before
                    printf("%c", text[j]);
                j++;
            }
            last_space_id = i;  // since, text[i] is a space
            not_first_word = 1; // to indicate that printing the first word is done
        }
    }
    printf("\n");

    return 0;
}