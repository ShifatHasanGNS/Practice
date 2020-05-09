#include <stdio.h>
#include <stdlib.h>

// Heap Data_Structure

int left(int i)
{
    return 2*i;
}

int right(int i)
{
    return 2*i+1;
}

int parent(int i)
{
    return i/2;
}

void max_heapify(int heap[], int heap_size, int i)
{
    int l = left(i), r = right(i), largest, temp;
    if (l <= heap_size) largest = heap[l] > heap[i] ? l : i;
    if (l <= heap_size && heap[r] > heap[largest]) largest = r;
    if (largest != i)
    {
        temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;
        max_heapify(heap, heap_size, largest);
    }
}

void build_max_heap(int heap[], int heap_size)
{
    for (int i = heap_size/2; i >= 1; i--)
        max_heapify(heap, heap_size, i);
}

//-------------------------------------------------------------------------------//

int main()
{
    int heap_array[] = {10, 17, 5, 7, 12, 19, 1, 2, 3};

    for (int i = 0; i < 9; i++)
        printf("%d  ", heap_array[i]);

    build_max_heap(heap_array, 9);

    printf("\n\n");

    for (int i = 0; i < 9; i++)
        printf("%d  ", heap_array[i]);

    return 0;
}
