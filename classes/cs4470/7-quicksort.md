# Quick Sort

Quick Sort is a divide and conquer algorithm.

This means that we split the problem into a smaller sized problem, and then solve the smaller problem.

In Merge Sort, we break down the array into smaller parts, and then sort as it is combined.

QuickSort does not have a combine step, like Merge Sort.

We will not have this routine here.

## Code
```
QuickSort(A,P,R)
  if (p < r)
    q := Partition(A, p, r)
    QuickSort(A, p, q-1)
    QuickSort(A, q+1, r)
```

Partition takes a split value, and it rearranges the data in a way that all the numbers to the left are <= to the split value, and all numbers to the right are >= to the split value.

That number will be in its final location.

```
Partition(A,p,r)
    x = A[r]
    i = p - 1
    for j = p to r - 1
        if A[j] <= x
            i = i + 1
            exchange A[i] with A[j]
    exchange A[i+1] with A[r]
    return i+1
```

This sorts one number, then two for each call, and doubles each time.

So $T(n) = f(n) + T(n/2)$