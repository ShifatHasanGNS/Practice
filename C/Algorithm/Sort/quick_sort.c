#include <stdio.h>

// Quick_Sort Algorithm ---> Time Complexity = nlog2(n) to n^2
void quick_sort(int array[], int left, int right)
{
    if(left >= right) return;
    int first, second, temp, partition_point, pivot=array[right];
    // Partitionaing...
    for(first=left-1, second=left; second<right; second++)
    {
        if(array[second] < pivot)
        {
            first++;
            temp = array[first];
            array[first] = array[second];
            array[second] = temp;
        }
    }
    partition_point = first + 1;
    array[right] = array[partition_point];
    array[partition_point] = pivot;
    // Sorting The Partitions...
    quick_sort(array, left, partition_point-1);
    quick_sort(array, partition_point+1, right);
}

int main()
{
    int array[] = {2, 3, 20, 13, 15, 6, 0, 19, 16, 12, 8, 10, 1, 5, 14, 18, 7, 17, 4, 9, 11};
    int i, len=sizeof(array)/sizeof(int);

    quick_sort(array, 0, len-1);
    printf("[ Quick_Sort Algorithm ]\n");
    for(i=0; i<len; i++) printf("%d  ", array[i]);
    printf("\n");

    return 0;
}