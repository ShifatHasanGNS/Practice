#include <iostream>
using namespace std;

// Quick_Sort Algorithm ---> Time Complexity = nlog2(n) to n^2
template <typename T>
void quick_sort(T array[], int low, int high)
{
    if(low >= high) return;
    T temp, pivot=array[high];
    int first, second, partition_point;
    // Partitionaing...
    for(first=low-1, second=low; second<high; second++)
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
    array[high] = array[partition_point];
    array[partition_point] = pivot;
    // Sorting The Partitions...
    quick_sort(array, low, partition_point-1);
    quick_sort(array, partition_point+1, high);
}

int main()
{
    int array[] = {2, 3, 20, 13, 15, 6, 0, 19, 16, 12, 8, 10, 1, 5, 14, 18, 7, 17, 4, 9, 11};
    int i, len=sizeof(array)/sizeof(int);

    quick_sort(array, 0, len-1);
    cout << "[ Quick_Sort Algorithm ]" << endl;
    for(i=0; i<len; i++) cout << array[i] << "  ";
    cout << endl;

    return 0;
}