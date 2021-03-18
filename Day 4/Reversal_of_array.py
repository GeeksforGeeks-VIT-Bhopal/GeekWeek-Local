def array_reverse(a):
    n = len(a)
    r = n / 2
    i = 1
    while i <= r:          # can use for loop too
        t = a[i-1]
        a[i - 1] = a[n - i]
        a[n - i] = t
        i = i + 1
    return a


array = [5, 10, 20, 30]
r_array = array_reverse(array)
print(r_array)
