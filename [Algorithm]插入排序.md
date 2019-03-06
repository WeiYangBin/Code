```
def insert_sort(seq):
    n = len(seq)
    print(seq)
    for i in range(1, n):
        value = seq[i]
        pos = i
        while pos > 0 and value < seq[pos - 1]:
            seq[pos] = seq[pos - 1]
            pos -= 1
        seq[pos] = value
        print(seq)
    return seq
```
