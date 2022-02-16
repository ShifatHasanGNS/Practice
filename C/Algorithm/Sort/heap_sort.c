#include <stdio.h>

// Heap_Sort Algorithm ---> Time Complexity = nlog2(n)

void heapify(int *heap, int heap_size, int i)
{
    int l = 2*i+1, r = 2*i+2, largest = i, temp;
    if (l < heap_size && heap[l] > heap[largest]) largest = l; // If left child is larger than root
    if (r < heap_size && heap[r] > heap[largest]) largest = r; // If right child is larger than largest so far
    if (largest != i) // If largest is not root
    {
        temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;
        heapify(heap, heap_size, largest); // Recursively heapify the affected sub-tree
    }
}

void heap_sort(int *heap, int heap_size)
{
    int temp;
    // Build heap (rearrange array)
    for (int i = heap_size/2-1; i >= 0; i--)
        heapify(heap, heap_size, i);
    // One by one extract an element from heap 
    for (int i = heap_size-1; i > 0; i--)
    {
        // Move current root to end 
        temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;
        heap_size--;
        // call heapify on the reduced heap
        heapify(heap, heap_size, 0);
    }
}

//-------------------------------------------------------------------------------//

int main()
{
    int heap_array[] = {2, 3, 20, 13, 15, 6, 0, 19, 16, 12, 8, 10, 1, 5, 14, 18, 7, 17, 4, 9, 11};
    int heap_size = sizeof(heap_array)/sizeof(int);

    heap_sort(heap_array, heap_size);
    printf("[ Heap_Sort Algorithm ]\n");
    for (int i = 0; i < heap_size; i++) printf("%d  ", heap_array[i]);
    printf("\n");

    return 0;
}
