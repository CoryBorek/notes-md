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

# Little O
o-notation to denote an upper bound that is not asymptomatically tight.

$o(g(n)) = $ { $f(n):$ for any constant $c > o$ there is a constant $n_o > 0$ such that $o \le f(n) \lt cg(n)$ for all $n \ge n_o $ }.

For example. $2n = o(n^2)$ but $2n^2 \ne o(n^2)$

$\lim_{n \rightarrow \infin} \frac{f(n)}{g(n)} = 0 \implies f(n) \in o(g(n))$

### example
$\lim_{n \rightarrow \infin} = \frac{2n^2 + 1}{n^2} = \frac{2n_2}{n^2} + \frac{1}{n^2} = \lim_{n \rightarrow \infin} 2 + \frac{1}{n^2} = 2 \ne 0 $

In the real world you never want the function to be over $n^2$.

if f(n) = n and f(n) is in n^2, then $o(n^2)$ for both

# Little $\omega$

$\omega$ notation is $\Omega$ as o-notioan is to O-notation

## Example
$n^2/2 = \omega(n)$ but $n^2 \ne \omega(n^2)$
\
In $\omega$ notation, the function f(n) becomes arbitrarily large relative to g(n) as n approaches infinity.

$\lim_{n \rightarrow \infin} \frac{f(n)}{g(n)} = \infin \implies f(n) \in \omega g(n)$
# Real world situation

We aren't exactly interested in the function itself. More so the upper and lower bounds.

Best case and worst case are not the equivilant of big $O$ and Big $\Omega$.

Generally, we will use Big O and Big Theta. Rarely we will use Big Omega.

One example is when we were talking about the best case complexity for comparison sorting algorithms.

We previously discussed that the best case is $n\log n$.

That means that complexity belongs to $\Omega (n\log n)$,


# Properties of a Log function

1. $\log_aa = 1$
2. $\log_aa^x = x$
3. $\log(ab) = \log a + \log b$
4. $\log_ab^x = x\log_ab$
5. $a^{\log_ax} = x$
6. $\log_ax = \frac{\log_bx}{\log_ba}$

# Some notation for logs

1. $\lg n = \log_2 n$
2. $\ln n = \log_en$
3. $\log n = \log_{10} n$
4. $\lg^k n = (\lg n)^k$
5. $\lg\lg n = \lg(\lg n)$
6. $\lg n + k = (\lg n) + k \ne \lg (n + k)$


# Algorithm speed

| n | $(\log n)^2$ | $\log n$ | $\log \log n$ |
| - | -| - | -|
| 2 | $(1)^2$ = 1 | 1 | 0 |
| 4 | $(2)^2$ = 4 | 2 | 1 | 
| 16 | $(4)^2$ = 16 | 4 | 2 |
| 128 | $(8)^2$ = 64 | 8 | 3 |

# Floor an celing

1. 
$\lfloor 3.5 \rfloor = 3$

$ - \lfloor 3.5 \rfloor = \lceil - 3.5 \rceil$

$ -3, -3$

2. $\lfloor n + x \rfloor = n + \lfloor x \rfloor$ where n is a natural number. $(1, 2, 3, 4, ...)$

Floor methods, are growing linearly, so $O(n)$.


### [Back to CS4470](%WEBPATH%/classes/cs4470/)