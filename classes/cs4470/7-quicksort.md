# QuickSort

QuickSort is a Divide and Conquer Algorithm

## About

### Divide
A[p..r] is paritioned (rearranged) into two subarrays A[p...q-1] and A[q+1...r]. Each element of A[p...q-1] is less than or equal to A[q] and everything in A[q+1...r] is greater than A[q]

### Conquer
Two subarrays are sorted by recursive calls to QuickSort

### Combine
No work needed

# QuickSort Pseudocode

```
QuickSort(A, p, r)
	if p < r
		q = Partition(A, p ,r)
		QuickSort(A, p, q-1)
		QuickSort(A, q+1, r)
```


# Paritition Pseudocode

```
Paritition(A, p, r)
	x = A[r]
	i = p -1
	for j = p to r-1
		if A[j] <= x
			i = i + 1
			exchange A[i] with A[j]
	exchange A[i+1] with A[r]
	return i+1
```

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
