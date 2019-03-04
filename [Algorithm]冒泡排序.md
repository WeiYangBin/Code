```
def bubble_sort(seq):
    n = len(seq)
    for i in range(n - 1):
        print(seq)
        for j in range(n - 1 - i):
            if seq[j] > seq[j + 1]:
                seq[j], seq[j + 1] = seq[j + 1], seq[j]
    print(seq)


seq = [3, 2, 1, 0, 4, 5, 6]
print(bubble_sort(seq))
```
