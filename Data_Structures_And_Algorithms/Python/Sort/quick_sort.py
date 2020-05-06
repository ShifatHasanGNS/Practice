# Quick_Sort Algorithm ---> Time Complexity = nlog2(n) to n^2
def quick_sort(array, low, high):
    if low >= high: return

    # Partitionaing...
    pivot=array[high]
    first=low-1

    for second in range(low, high):
        if array[second] < pivot:
            first += 1
            array[first], array[second] = array[second], array[first]
    
    partition_point = first + 1
    array[partition_point], array[high] = array[high], array[partition_point]

    # Sorting The Partitions...
    quick_sort(array, low, partition_point-1)
    quick_sort(array, partition_point+1, high)


array = [2, 3, 20, 13, 15, 6, 0, 19, 16, 12, 8, 10, 1, 5, 14, 18, 7, 17, 4, 9, 11]

quick_sort(array, 0, len(array)-1)
print(f'[ Quick_Sort Algorithm ]\n{array}\n')