def leastGreaterElement(arr):
    n = len(arr)
    for i in range(n):
        lG = -1
        for j in range(i + 1, n):
            if (arr[j] > arr[i]):
                if (lG == -1):
                    lG = arr[j]
                else:
                    lG = min(lG, arr[j])
        arr[i] = lG
    return arr
