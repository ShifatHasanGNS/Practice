#include <stdio.h>

// Merge_Sort Algorithm ---> Time Complexity = nlog2(n)
void merge_sort(int array[], int left, int right)
{
    if(left >= right) return;
    int mid = left + (right-left)/2;

    // Sort In Two Parts...
    merge_sort(array, left, mid);
    merge_sort(array, mid+1, right);

    // Merge Those Two Sorted Parts...
    int size_left = mid-left+1, size_right = right-mid;
    int left_array[size_left], right_array[size_right], first, second, third;

    // Copy data to temporary sub_array left_array[]
    for(first=0; first<size_left; first++)
        left_array[first] = array[left+first];

    // Copy data to temporary sub_array right_array[]
    for(second=0; second<size_right; second++)
        right_array[second] = array[mid+1+second];

    // Merge the temporary sub_arrays back into array[left...right]

    first = 0; // Initial index of first subarray 
    second = 0; // Initial index of second subarray 
    third = left; // Initial index of merged array

    while(first < size_left && second < size_right)
    {
        if(left_array[first] <= right_array[second])
        {
            array[third] = left_array[first];
            first++;
        }
        else
        {
            array[third] = right_array[second];
            second++;
        }
        third++;
    }
    // Copy the remaining elements of left_array[], if there are any...
    while(first < size_left)
    {
        array[third] = left_array[first];
        first++;
        third++;
    }
    // Copy the remaining elements of right_array[], if there are any...
    while(second < size_right)
    {
        array[third] = right_array[second];
        second++;
        third++;
    }
    
}

int main()
{
    int array[] = {2, 3, 20, 13, 15, 6, 0, 19, 16, 12, 8, 10, 1, 5, 14, 18, 7, 17, 4, 9, 11};
    int i, len=sizeof(array)/sizeof(int);

    merge_sort(array, 0, len-1);
    printf("[ Merge_Sort Algorithm ]\n");
    for(i=0; i<len; i++) printf("%d  ", array[i]);
    printf("\n");

    return 0;
}