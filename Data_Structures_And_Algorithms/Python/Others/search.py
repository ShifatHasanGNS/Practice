# Linear_Search Algorithm ---> Time_Complexity = n
def linear_search(array, len, key):
    for i in range(len):
        if array[i] == key: return i
    return -1

# Linear_Search Algorithm ---> Time_Complexity = log2(n)
def binary_search(array, len, key):
    left, right = 0, len-1
    while left <= right:
        mid = (left + right)//2
        if key == array[mid]: return mid
        elif key < array[mid]: right = mid - 1
        elif key > array[mid]: left = mid + 1
    return -1

# Linear_Search Algorithm ---> Time_Complexity = log3(n)
def ternary_search(array, len, key):
    left, right = 0, len-1
    while left <= right:
        walk = (right-left+1)//3
        mid1 = left + walk
        mid2 = right - walk
        if key == array[mid1]: return mid1
        if key == array[mid2]: return mid2
        if key < array[mid1]: right = mid1 - 1
        elif key > array[mid1] and key < array[mid2]:
            left = mid1 + 1
            right = mid2 - 1
        elif key > array[mid2]: left = mid2 + 1 
    return -1

#-------------------------------------------------------------------------------#

array, key = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20], 11

print(f'[ Linear_Search Algorithm ]  :: {key} is found at {linear_search(array, len(array), key)}')
print(f'[ Binary_Search Algorithm ]  :: {key} is found at {binary_search(array, len(array), key)}')
print(f'[ Ternary_Search Algorithm ] :: {key} is found at {ternary_search(array, len(array), key)}')