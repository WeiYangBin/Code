```
def dp(m, n):
    matrix = [[0 for _ in range(m)] for _ in range(n)]
    for c in range(m):
        matrix[0][c] = 1
    for r in range(n):
        matrix[r][0] = 1
    for i in range(1, n):
        for j in range(1, m):
            matrix[i][j] = matrix[i-1][j] + matrix[i][j-1]

    return matrix[n-1][m-1]
```
