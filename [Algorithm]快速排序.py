
# Method:1
def quick_sort(seq):

    if len(seq) <= 1:
        return seq
    pivot = seq[len(seq) // 2]
    left = [x for x in seq if x < pivot]
    middle = [x for x in seq if x == pivot]
    right = [x for x in seq if x > pivot]

    return quick_sort(left) + middle + quick_sort(right)

# Method:2
def quick_sort_inplace(seq, beg, end):
    if beg < end:
        pivot = partition(seq, beg, end)
        quick_sort_inplace(seq, beg, pivot)
        quick_sort_inplace(seq, pivot + 1, end)
    return seq

def partition(seq, beg, end):
    pivot_index = beg
    pivot = seq[pivot_index]
    left = pivot_index + 1
    right = end - 1

    while True:
        while left <= right and seq[left] < pivot:
            left += 1
        while right >= left and seq[right] >= pivot:
            right -= 1

        if left > right:
            break
        else:
            seq[left], seq[right] = seq[right], seq[left]

    seq[pivot_index], seq[right] = seq[right], seq[pivot_index]
    return right
