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
    for (int i = heap_size/2; i >= 0; i--)
        max_heapify(heap, heap_size, i);
}

void heap_sort(int heap[], int heap_size)
{
    int temp;
    build_max_heap(heap, heap_size);
    for (int i = heap_size; i > 0; i--)
    {
        temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;
        heap_size--;
        max_heapify(heap, heap_size, 0);
    }
}

//-------------------------------------------------------------------------------//

int main()
{
    int heap_array[] = {19, 10, 17, 5, 7, 12, 1, 2, 3};

    for (int i = 0; i < 9; i++)
        printf("%d  ", heap_array[i]);

    heap_sort(heap_array, 9);

    printf("\n\n");

    for (int i = 0; i < 9; i++)
        printf("%d  ", heap_array[0]);

    return 0;
}
