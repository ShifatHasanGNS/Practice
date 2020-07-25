# Bubble_Sort Algorithm ---> Time_Complexity = n^2
def bubble_sort(array, len):
    if len < 2: return
    for first in range(len):
        for second in range(len-first-1):
            if array[second] > array[second+1]:
                array[second], array[second+1] = array[second+1], array[second]


array = [2, 3, 20, 13, 15, 6, 0, 19, 16, 12, 8, 10, 1, 5, 14, 18, 7, 17, 4, 9, 11]

bubble_sort(array, len(array))
print(f'[ Bubble_Sort Algorithm ]\n{array}\n')