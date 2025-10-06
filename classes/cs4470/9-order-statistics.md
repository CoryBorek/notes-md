# Order Statistics

The ith order statistic as of set S is the element with the rank i.

The 0th order statistic is the minimum item in the set.

the nth order statistic is the maximum item in the set.

# Minimum
```
Minimum(A)
	min = A[1]
	for i = 2 to A.length
		if min > A[i]
			min = A[i]
	return min
```

# Simultanious min and max

We can get both the minimum and the maximum values from a set using the following algorithm.


```
Min-And-Max(A)
	min = max = A[1]
	for i = 1 to A.length / 2
		if A[2i-1] > A[2i]
			if min > A[2i]
				min = A[2i]
				if max < A[2i-1]
					max = A[2i-1]
	    else if min > A[2i-1]
			min = A[2i-1]
			if max < A[2i]
				max = A[2i]
	return min, max
```

# Selecting ith element

We can do this in linear time in a similar way to binary search.

We do this with a randomized partition. If the partition returns index i, then A[i] is the ith order statistic.

if the partition returns index k < i, then partition is on the right side.

if partition returns index k > i, then partition on left side.

## Randomized-Select algorithm

```
Randomized-Select(A, p, r, i)
	if p == r
		return A[p]
	q = Randomized-Partition(A, p ,r)
	k = q - p + 1
	if i == k
		return A[q]
	else if i < k
		return Randomized-Select(A, p, q-1, i)
	else return Randomized-Select(A, q+1, r, i-k)
```

