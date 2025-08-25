# Recursive Analysis

## Merge Sort

Merge-Sort(A, p, r)
1. if p < r
2. q = $\lfloor (p + r) / 2 \rfloor$
3. Merge-Sort(A, p, q)
4. Merge-Sort(A, q+1, r)
5. Merge(A, p, q, r)

# Analysis

Write the recurrence relation

T(n) = 2T(n/2) + n + 1

Once we have that, we can use the substitution method, tree method, or master theorem to solve.

Power function
$T(n) = 1 + T(n-1)$


```
void fun (int a[], int i, int n) {
    if (i < n) { // 1
        min = findMin(a, i, n-1); // n
        swap(a[i], min); // 1
        fun(a,i+1, min); // n
    }
}

O(n^2)