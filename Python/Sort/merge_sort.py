# Merge_Sort Algorithm ---> Time Complexity = nlog2(n) to n^2
def merge_sort(array, left, right):
    if left >= right: return

    mid = left + (right-left)//2

    # Sort In Two Parts...
    merge_sort(array, left, mid)
    merge_sort(array, mid+1, right)

    # Merge Those Two Sorted Parts...
    size_left, size_right = mid-left+1, right-mid
    left_array, right_array = [0]*size_left, [0]*size_right

    # Copy data to temporary sub_array left_array[]
    for first in range(size_left):
        left_array[first] = array[left+first]
    
    # Copy data to temporary sub_array right_array[]
    for second in range(size_right):
        right_array[second] = array[mid+1+second]
    
    # Merge the temporary sub_arrays back into array[left...right]
    first = 0; # Initial index of first subarray 
    second = 0; # Initial index of second subarray 
    third = left; # Initial index of merged array

    while first < size_left and second < size_right:
        if left_array[first] <= right_array[second]:
            array[third] = left_array[first]
            first += 1
        else:
            array[third] = right_array[second]
            second += 1
        third += 1
    
    # Copy the remaining elements of left_array[], if there are any...
    while first < size_left:
        array[third] = left_array[first]
        first += 1
        third += 1
    
    # Copy the remaining elements of right_array[], if there are any...
    while second < size_right:
        array[third] = right_array[second]
        second += 1
        third += 1


array = [2, 3, 20, 13, 15, 6, 0, 19, 16, 12, 8, 10, 1, 5, 14, 18, 7, 17, 4, 9, 11]

merge_sort(array, 0, len(array)-1)
print(f'[ Merge_Sort Algorithm ]\n{array}\n')