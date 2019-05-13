def quicksort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quicksort(left) + middle + quicksort(right)

n = int(input())
list = []
for i in range(n):
    list += [int(input())]
listOrdenada = quicksort(list)
for i in listOrdenada:
    print(i)
