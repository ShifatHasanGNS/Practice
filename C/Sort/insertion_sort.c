#include <stdio.h>

// Insertion_Sort Algorithm ---> Time_Complexity = n^2
void insertion_sort(int array[], int len)
{
    if(len < 2) return;
    int first, second, target;
    for(first=0; first<len; first++)
    {
        target = array[first];
        for(second = first-1; second >= 0 && target < array[second]; second--)
            array[second+1] = array[second];
        array[second+1] = target;
    }
}

int main()
{
    int array[] = {2, 3, 20, 13, 15, 6, 0, 19, 16, 12, 8, 10, 1, 5, 14, 18, 7, 17, 4, 9, 11};
    int i, len=sizeof(array)/sizeof(int);

    insertion_sort(array, len);
    printf("[ Insertion_Sort Algorithm ]\n");
    for(i=0; i<len; i++) printf("%d  ", array[i]);
    printf("\n");

    return 0;
}