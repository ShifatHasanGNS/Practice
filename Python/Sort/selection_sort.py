# Selection_Sort Algorithm ---> Time_Complexity = n^2
def selection_sort(array, len):
    if len < 2: return
    for first in range(len-1):
        index_min = first
        for second in range(first+1, len):
            if array[second] < array[index_min]: index_min = second
        if first != index_min: array[index_min], array[first] = array[first], array[index_min]


array = [2, 3, 20, 13, 15, 6, 0, 19, 16, 12, 8, 10, 1, 5, 14, 18, 7, 17, 4, 9, 11]

selection_sort(array, len(array))
print(f'[ Selection_Sort Algorithm ]\n{array}\n')