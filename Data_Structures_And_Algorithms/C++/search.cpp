#include <iostream>
using namespace std;

// Linear_Search Algorithm ---> Time_Complexity = n
template<typename T>
int linear_search(T array[], int len, T key)
{
    for(int i=0; i<len; i++) if(array[i] == key) return i;
    return -1;
}

// Binary_Search Algorithm ---> Time_Complexity = log2(n)
template<typename T>
int binary_search(T array[], int len, T key)
{
    int left=0, mid, right=len-1;
    while(left <= right)
    {
        mid = (left + right)/2;
        if(key == array[mid]) return mid;
        else if(key < array[mid]) right = mid - 1;
        else if(key > array[mid]) left = mid + 1;
    }
    return -1;
}

// Ternary_Search Algorithm ---> Time_Complexity = log3(n)
template<typename T>
int ternary_search(T array[], int len, T key)
{
    int left=0, mid1, mid2, right=len-1, walk;
    while(left <= right)
    {
        walk = (right-left+1)/3;
        mid1 = left + walk;
        mid2 = right - walk;
        if(key == array[mid1]) return mid1;
        if(key == array[mid2]) return mid2;
        if(key < array[mid1]) right = mid1 - 1;
        else if(key > array[mid1] && key < array[mid2])
        {
            left = mid1 + 1;
            right = mid2 - 1;
        }
        else if(key > array[mid2]) left = mid2 + 1;
    }
    return -1;
}

//-------------------------------------------------------------------------------//

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}, key = 11;

    cout << "[ Linear_Search Algorithm ]  :: " << key << " is found at " << linear_search(array, sizeof(array)/sizeof(int), key) << endl;
    cout << "[ Binary_Search Algorithm ]  :: " << key << " is found at " << binary_search(array, sizeof(array)/sizeof(int), key) << endl;
    cout << "[ Ternary_Search Algorithm ] :: " << key << " is found at " << ternary_search(array, sizeof(array)/sizeof(int), key) << endl;

    return 0;
}