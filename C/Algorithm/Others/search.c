#include <stdio.h>

// Linear_Search Algorithm ---> Time_Complexity = n
int linear_search(int array[], int len, int key)
{
    for (int i = 0; i < len; i++)
        if (array[i] == key)
            return i;
    return -1;
}

// Binary_Search Algorithm ---> Time_Complexity = log2(n)
int binary_search(int array[], int len, int key)
{
    int left = 0, mid, right = len - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (key == array[mid])
            return mid;
        else if (key < array[mid])
            right = mid - 1;
        else if (key > array[mid])
            left = mid + 1;
    }
    return -1;
}

// Ternary_Search Algorithm ---> Time_Complexity = log3(n)
int ternary_search(int array[], int len, int key)
{
    int left = 0, mid1, mid2, right = len - 1, walk;
    while (left <= right)
    {
        walk = (right - left + 1) / 3;
        mid1 = left + walk;
        mid2 = right - walk;
        if (key == array[mid1])
            return mid1;
        if (key == array[mid2])
            return mid2;
        if (key < array[mid1])
            right = mid1 - 1;
        else if (key > array[mid1] && key < array[mid2])
        {
            left = mid1 + 1;
            right = mid2 - 1;
        }
        else if (key > array[mid2])
            left = mid2 + 1;
    }
    return -1;
}

//-------------------------------------------------------------------------------//

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}, key = 11;

    printf("[ Linear_Search Algorithm ]  :: %d is found at %d\n", key, linear_search(array, sizeof(array) / sizeof(int), key));
    printf("[ Binary_Search Algorithm ]  :: %d is found at %d\n", key, binary_search(array, sizeof(array) / sizeof(int), key));
    printf("[ Ternary_Search Algorithm ] :: %d is found at %d\n", key, ternary_search(array, sizeof(array) / sizeof(int), key));

    return 0;
}