# Quick Sort

Quick Sort is a divide and conquer algorithm.

### Divide
A[p..r] is paritioned (rearranged) into two subarrays A[p...q-1] and A[q+1...r]. Each element of A[p...q-1] is less than or equal to A[q] and everything in A[q+1...r] is greater than A[q]

### Conquer
Two subarrays are sorted by recursive calls to QuickSort

### Combine
No work needed


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

# Issues with QuickSort and timings

If the array is already sorted, then QuickSort is $O(nˆ2)$, otherwise $O(n\log n)$.

This happens as the two arrays will always have a size of (n-1) and 0.

For others, it will have more data, but will be relatively close to the center.

This issue can be mediated by picking a random pivot point.


## Randomized Partition / Quick Sort

```
Randomized-Partition(A, p, r)
	i = Random(p, r)
	exchange A[r] with A[i]
	return Partition(A, p, r)
```

```
Randomized-QuickSort(A, p ,r)
	if p < r
		q = Randomized-Paritition(A, p, r)
		Randomized-QuickSort(A, p, q-1)
		Randomized-QuickSort(A, q+1, r)
```

### Other notes on QuickSort

 - Usually Efficient
   - Typically $O(n\log n)$
   - Rarely $O(nˆ2)$
 - In place (with some minor stack usage)
 - Most popular sorting algorithm for general input values.
