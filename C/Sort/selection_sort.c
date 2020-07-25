#include <stdio.h>

// Selection_Sort Algorithm ---> Time_Complexity = n^2
void selection_sort(int array[], int len)
{
    if(len < 2) return;
    int first, second, index_min, temp;
    for(first = 0; first < len-1; first++)
    {
        index_min = first;
        for(second = first+1; second < len; second++)
            if(array[second] < array[index_min]) index_min = second;
        if(first != index_min)
        {
            temp = array[first];
            array[first] = array[index_min];
            array[index_min] = temp;
        }
    }
}

int main()
{
    int array[] = {2, 3, 20, 13, 15, 6, 0, 19, 16, 12, 8, 10, 1, 5, 14, 18, 7, 17, 4, 9, 11};
    int i, len=sizeof(array)/sizeof(int);

    selection_sort(array, len);
    printf("[ Selection_Sort Algorithm ]\n");
    for(i=0; i<len; i++) printf("%d  ", array[i]);
    printf("\n");

    return 0;
}