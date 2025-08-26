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
        fun(a,i+1, min); // recursive call (n times)
    }
}
```

$T(n) = T(n-1) + n + 1$

$ = T(n-2) + n-1 + n + 2$

$ = T(n-3) + n-2 + n-1 + n + 3$

$...$

$ = 1 + 2 + 3 + ... + n-2 + n - 1 + n + (constant)$

if i = 0, worst case.


$O(n^2)$

# Binary Search

```java
boolean BinarySearch(ItemType info[], ItemType item, int fromLoc, int toLoc) {

    int mid;
    if (fromLoc > toLoc)
        return false;
    else {
        mid = (fromLoc + toLoc) / 2;
        if (info[mid] == item)
            return true;
        else if (item < info[mid])
            return BinarySearch(info, item, fromLoc, mid-1);
        else return BinarySearch(info, item, mid+1, toLoc);
    }
}
```

This is T(n/2), as we split the data in half for each call.

# Master Theorem

Let T(n) be a function defined on a positive n as shown below

$$
T(n) \le \begin{cases}
    c, if n \le 1, \\
    aT(n-b) + f(n), n > 1 \\
\end{cases}
$$

for some constants c, a>0, b>0, d>=0, and function f(n). If f(n) is $O(n^d)$ then:

1. if $a<1$ then $T(n) = O(n^d)$ ... $T(n) = O(f(n))$
2. if $a = 1$ then $T(n) = O(n^{d+1})$ ... $T(n) = O(n*f(n))$
3. if $a>1$ then $T(n) = O(n^da^{n/b})$

## For dividing functions

$T(n) = aT(n/b) + f(n)$

$T(1) = c$

NOTE: finish this from the reccurrence relationship powerpoint.

## Example

$T(n) = 2T(n-1) + 1$

$a=2, b=1, d=0$

$f(n) \in O(1)$

$f(n) \in O(n^0)$

$T(n) \in O(n^da^{n/b}$

$T(n) \in O(n^02^n)$

$T(n) \in O(2^n)$

## Merge Sort example

$T(n) = 2T(n/2) + n + 1$

$a = 2, b = 2, d = 1$

$b^d = 2^1 = 2 = a$

$T(n) \in O(n^d \log n)$

$T(n) \in O(n \log n)$

## Master Theorem pitfalls

Cam't use it if T(n) is not monotone,

is not polynomial,

b cannot be expressed as a constant e.g.

$T(n) = T(\sqrt{n})$

# Recurrence
A recurrence defines T(n) in terms of T for smaller values

Recurrences are sed in analyzing recursive algorithms.

# Substitution Method
We will use the Merge Sort recurrence relation.

$T(n) = 2T(n/2) + O(n)$

We want the final value of T(n)

First step: guess.

One way is to use prior knowledge.

We already know that this is a merge sort recurrence relation. We know that this is n\log n.

So we will guess that $T(n) \le n\log n$

We plug in the guess to the right hand side and plug it in.

This is where the substitution comes in.

$T(n/2) \le c\frac{n}{2}\log(\frac{n}{2})$

$T(n) \le 2*c\frac{n}{2} \log(\frac{n}{2}) + kn$

We want to see that $T(n) \le cn\log n - $(something > 0 or positive)


$T(n/2) \le c(n/2)\log(n/2)$

$T(n) \le cn \log(n/2) + kn$

$ \le cn[\log n - \log 2] + kn$

$ \le cn [\log n - 1] + kn$
$ = \le cn\log n - cn + kn$

$ = cn\log n(c - k)$

This is the case when $c > k$.

the constraint on n is when $\log n > 1, $ or $n \ge 2$.

This also works for Big $\Omega$.

We need to show that $T(n) \ge n \log n + (something)$
where that something is positive.

guess:

$T(n) \ge cn\log n$

$T(n/2) \ge c\frac{n}{2}\log{\frac{n}{2}}$

$T(n) \ge 2(c\frac{n}{2})\log(\frac{n}{2}) + kn$

$ = cn\log(n/2) + kn$

$ = cn[\log n - \log_2 2] + kn$

$ = cn[\log n - 1] + kn$

$ = cn\log n - cn + kn$

$= cn\log n + n(k - c)$

we want k - c > 0, so k > c

we want n\log n to be greater than 0, so n > 2.
# Tree Method