```
def binary_search(sorted_array, val):
    if not sorted_array:
        return -1

    start = 0
    end = len(sorted_array) - 1

    while start <= end:
        mid = int((end + start) / 2)
        if sorted_array[mid] == val:
            return mid
        elif sorted_array[mid] > val:
            end = mid - 1
        else:
            start = mid + 1
    return -1
```
