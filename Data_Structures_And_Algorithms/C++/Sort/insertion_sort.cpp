#include <iostream>
using namespace std;

// Insertion_Sort Algorithm ---> Time_Complexity = n^2
template<typename T>
void insertion_sort(T array[], int len)
{
    if(len < 2) return;
    T target;
    int first, second;
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
    cout << "[ Insertion_Sort Algorithm ]" << endl;
    for(i=0; i<len; i++) cout << array[i] << "  ";
    cout << endl;

    return 0;
}