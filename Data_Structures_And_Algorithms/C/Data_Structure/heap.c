#include <stdio.h>
#include <stdlib.h>

// Heap Data_Structure

void printHeap(int heap[], int heap_size) 
{ 
    for (int i = 0; i < heap_size; i++)
        printf("%d  ", heap[i]);
    printf("\n");
} 

int left(int i)
{
    return 2*i+1;
}

int right(int i)
{
    return 2*i+2;
}

int parent(int i)
{
    return (i-1)/2;
}

void max_heapify(int *heap, int heap_size, int i)
{
    int l = left(i), r = right(i), largest = i, temp;
    if (l < heap_size && heap[l] > heap[largest]) largest = l; // If left child is larger than root
    if (r < heap_size && heap[r] > heap[largest]) largest = r; // If right child is larger than largest so far
    if (largest != i) // If largest is not root
    {
        temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;
        max_heapify(heap, heap_size, largest); // Recursively max_heapify the affected sub-tree
    }
}

void min_heapify(int *heap, int heap_size, int i)
{
    int l = left(i), r = right(i), smallest = i, temp;
    if (l < heap_size && heap[l] < heap[smallest]) smallest = l; // If left child is smaller than root
    if (r < heap_size && heap[r] < heap[smallest]) smallest = r; // If right child is smaller than smallest so far
    if (smallest != i) // If smallest is not root
    {
        temp = heap[i];
        heap[i] = heap[smallest];
        heap[smallest] = temp;
        min_heapify(heap, heap_size, smallest); // Recursively min_heapify the affected sub-tree
    }
}

void build_max_heap(int *heap, int heap_size)
{
    // Build heap (rearrange array)
    for (int i = heap_size/2-1; i >= 0; i--)
        max_heapify(heap, heap_size, i);
}

void build_min_heap(int *heap, int heap_size)
{
    // Build heap (rearrange array)
    for (int i = heap_size/2-1; i >= 0; i--)
        min_heapify(heap, heap_size, i);
}

void heap_sort(int *heap, int heap_size)
{
    int temp;
    build_max_heap(heap, heap_size); // Build max_heap (rearrange array)
    // One by one extract an element from heap 
    for (int i = heap_size-1; i >= 0; i--)
    {
        // Move current root to end 
        temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;
        heap_size--;
        // call max_heapify on the reduced heap
        max_heapify(heap, heap_size, 0);
    }
}

//-------------------------------------------------------------------------------//

int main()
{
    int heap_array[] = {2, 3, 20, 13, 15, 6, 0, 19, 16, 12, 8, 10, 1, 5, 14, 18, 7, 17, 4, 9, 11};
    int heap_size = sizeof(heap_array)/sizeof(int);

    printf("[Heap-Sort] :: ");
    heap_sort(heap_array, heap_size);
    printHeap(heap_array, heap_size);

    return 0;
}
