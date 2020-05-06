#include <stdio.h>

// Bubble_Sort Algorithm ---> Time_Complexity = n^2
void bubble_sort(int array[], int len)
{
    if(len < 2) return;
    int first, second, temp;
    for(first=0; first<len; first++)
    {
        for(second = 0; second < len-first-1; second++)
        {
            if(array[second] > array[second+1])
            {
                temp = array[second];
                array[second] = array[second+1];
                array[second+1] = temp;
            }
        }
    }
}

int main()
{
    int array[] = {2, 3, 20, 13, 15, 6, 0, 19, 16, 12, 8, 10, 1, 5, 14, 18, 7, 17, 4, 9, 11};
    int i, len=sizeof(array)/sizeof(int);

    bubble_sort(array, len);
    printf("[ Bubble_Sort Algorithm ]\n");
    for(i=0; i<len; i++) printf("%d  ", array[i]);
    printf("\n");

    return 0;
}