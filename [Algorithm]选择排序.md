```
def select_sort(seq):
    n = len(seq)
    for i in range(n):
        min_ = i
        for j in range(i+1, n):
            if seq[j] < seq[min_]:

                min_ = j

        if min_ != i:
            seq[i], seq[min_] = seq[min_], seq[i]

    return seq

```
