# Linear Time Sorting Algorithms

# Decision Trees

Determines how something should work based on inputs.

Sometimes used in ML/AI.

Every comparison-based sorting algorithm has a decision tree. Trees may differ for different algorithms.

## Example Tree

 - a\_1 : a\_2
   - a\_2 : a\_3
     - a\_1 <= a\_2 <= a\_3
	 - a\_1 : a\_3
	   - a\_1 <= a\_3 < a\_2
	   - a\_3 < a\_1 < a\_2
   - a\_1 : a\_3
     - a\_2 < a\_1 <= a\_3
	 - a\_2 : a\_3
	   - a\_2 <= a\_3 < a\_1
	   - a\_3 < a\_2 < a\_1

# Linear-Time Sorting
There are three major Linear Time Sorting algorithms that determine order without using comparisions

They all have restrictions.

## Counting Sort
 - Assumes values being sorted have values 0, ... , k
 - Stable
 - Auxilary Storage O(k)

## Radix Sort
 - Sorts Fixed-length data, such as integers
 - Sorts from lowest digit to highest
 - Must use stable sort
 - Originally used to sort computer punch cards
 
## Bucket Sort

 - Assumes input values are randomly distributed over values in [0, 1).
 
# Counting Sort

```
CountingSort(A[1..N], B[1..N], k)

	let C[0...k] be a new array.
	for i = 0 to k
		C[i] = 0
	for j = 1 to A.length
		C[A[j]] = C[A[j]] + 1
	for i = 1 to k
		C[i] = C[i] + C[i-1]
	for j = A.length down to 1
		B[C[A[j]]] = A[j]
		C[A[j]] = C[A[j]] - 1
```

# Radix Sort
Was used by card-sorting machines to read punch cards
 - How IBM made its early money
 
Key is to sort digit by digit.

```
RadixSort(A,d)
	for i = 1 to d
		use a stable sorting algorithm to sort array A on digit i
```

# Bucket Sort

```
BucketSort(A)
	n = A.length
	let B[0...n-1] be a new array
	for i = 0 to n-1
		make B[i] be an empty list
	for i = 1 to n
		insert A[i] into list B[ \lfloor n * A[i] \rfloor ]
	for i = 0 to n-1
		sort list B[i] with insertion sort
	concatentate the lists B[0], B[1], ... , B[n-1] together in order.
```

# Summary
If you don't know about data, comparision-based sorting is the best that you can do.

Some linear sorting algorithms exist that exploit certain properties of the data

 - If the data values are known in advance and the range isn't too large, counting sort will work
 - If you're sorting numbers or fixed-length strings, radix sort will work
 - If your data is uniformly distributed, bucket sort will work.
  - If you have a different distribution of data, use that knowledge for placing data into bins that still guaruntee linear runtime
