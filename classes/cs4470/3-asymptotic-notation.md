# Asymptotic Notation.

# Big O and Growth rate

If is $f(n)$ a polynomicla of degree d, then $f(n)$ is $O(n^d)$.

1. Drop lower-order terms
2. Drop constant factirs

Use the smallest possible class of functions

USe the simplest expression of the class


# Big Omega

For function $g(n)$, we defing $\Omega(g(n))$, big-Omega of $n$, as the set

$\Omega(g(n)) = $ { $f(n) : \exist$ positive constances $c$ and $n_0$, such that $\forall n \ge n_0 $, we have $o \le cg(n) \le f(n)$}

# Big Theta

Big theta is the intersection

$\Theta(g(n)) = $ { $f(n) : \exists$ positive constants $c_1, c_2,$ and $n_0$, such that $\forall n \ge n_0$, we have $o \le c_1g(n) \le f(n) \le c_2g(n)$ }.

# Real world situation

We aren't exactly interested in the function itself. More so the upper and lower bounds.

Best case and worst case are not the equivilant of big $O$ and Big $\Omega$.

Generally, we will use Big O and Big Theta. Rarely we will use Big Omega.

One example is when we were talking about the best case complexity for comparison sorting algorithms.

We previously discussed that the best case is $n\log n$.

That means that complexity belongs to $\Omega (n\log n)$,


# Loop invariant problem

```
prodecude max(A[]: array)
maximum = A[1]
for (i = 2 to n)
{
    if (A[i] > maximum)
        maximum = A[i]
    return maximum
}
```

For insertion sort, A[1.....i-1] is sorted.

maximum = max(a[1.......i-1]);

### Initialization

i = 2, max(A[1...2-1], A[1]) = max(A[1]) = A[1].

### Maintenance
At the beginning of the the ith iteration, maximumm = max(A{i...i-1})

At the end of the ith iteration, maximum = max(A[1...i])

At the end of the ith iteration, 

If A[I] is bigger than max, then maximum = max(A[i], maximum)

maximum = max(A[i], max(A[1...i-1])).

= max(A[1....i])

## Termination



### [Back to CS4470](%WEBPATH%/classes/cs4470/)