// Tri-diagonal Matrix

/**
tri_diagonal Matrix =>
1 2 0 0 0
1 2 3 0 0
0 2 3 4 0
0 0 3 4 5
0 0 0 4 5

* upper diagonal i-j = -1
* main diagonal i-j = 0
* lower diagonal i-j = 1
* A[i][j] == non-zero if |i-j| <= 1
* A[i][j] == 0 if |i-j| > 1

* non-zero elements =>
5 + 4 + 4
n + n -1 + n -1
3n-2

* since we care about only non-zero values so we can put them in 1d array
A = lower values + main values + upper values

if i-j = 1 index A[i]
if i-j = 0 index A[n-1+i]
if i-j = -1 index A[2n-1+i]
*/