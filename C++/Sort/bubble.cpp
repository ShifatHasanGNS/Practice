#include <iostream>
using namespace std;

// Bubble_Sort Algorithm ---> Time_Complexity = n^2
template<typename T>
void bubble_sort(T array[], int len)
{
    if(len < 2) return;
    T temp;
    int first, second;
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
    cout << "[ Bubble_Sort Algorithm ]" << endl;
    for(i=0; i<len; i++) cout << array[i] << "  ";
    cout << endl;

    return 0;
}