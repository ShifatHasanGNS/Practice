# Insertion_Sort Algorithm ---> Time_Complexity = n^2
def insertion_sort(array, len):
    if len < 2: return
    for first in range(len):
        for second in range(first-1, -1, -1):
            if array[first] < array[second]:
                array[second], array[second+1] = array[first], array[second]


array = [2, 3, 20, 13, 15, 6, 0, 19, 16, 12, 8, 10, 1, 5, 14, 18, 7, 17, 4, 9, 11]

insertion_sort(array, len(array))
print(f'[ Insertion_Sort Algorithm ]\n{array}\n')