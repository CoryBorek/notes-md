# Average Runtime Analysis


(notes done on paper: TODO: rewrite it here.)


# Example Problem

Consider two coins are flipped 20 times. What is the expected number of times you will get HH or TT.

$E{X} = \sum_x(x p(x))$

$x$ = random variable

$p(x)$ = distribution

Possible outcomes: $\{HH, HT, TH, TT\}$

We are looking for {$HH, TT$}

Possible outcomes: 0, 1, 2, 3, ... 20

The calculation of $P(3)$ is a little difficult, so we will get a big picture idea.

This chance could occur anywhere. It could be in the first, seventh, or 17th throw.

If we try to calculate this, we would have to go through all possible cases and add it up. This would be very tedious.

We will want something called Indicator Random Variable.

There are two properties that we want to explain first>:

## Linearity of Expectation

$E[X,Y] = E[X] + E[Y]$

$E[X_1 + X_2 + ... + X_n] = E[X_1] + E[X_2] + ... + E[X_n]$

$E[\sum_{i=1}^{n}X+i] = \sum_{i=1}^{n}E[X_i]$

This property does not apply for the Max operator.

## Indicator Random Variable
$X_i$ = 1 if $i^{th}$ flip has HH or TT, 0 otherwise

$X = X_1 + X_2 + ... + X_{20}$

with this definition. we will end up with a bunch of 1s and 0s.

If we add them together, we will get a total count.

This means that X is the count of the total variables that you will get in 20 flips.

$E[X] = E[X_1 + X_2 + ... + X_{20}]$

$E[X] = E[\sum_{i=1}^{20}X_i]$

$E[X] = \sum_{i=1}^{20}E[X_i]$

$E[X_i] = 1*Prob(HH, TT) + 0*Prob(HT,TH)$

$E[X_i] = 1 * Prob(HH, TT)$


$E[X_i] = 1 * 0.5$

$E[X_i] = \frac{1}{2}$

$E[X] = \sum_{i=1}^{20}\frac{1}{2}$


$E[X] = \frac{1}{2}*\sum_{i=1}^{20}1$

$E[X] = \frac{20}{2} = 10$

What happens if the coins are not fair?

Let's say that P(H) = 1/3 and P(T) = 2/3

$P(A) + P(B) - P(A \cap b)$

$P(HH \cup TT) = P(HH) + P(TT) - P(HH \cap TT)$

$= 1/4 + 4/9 = 5/9$

$E[X_i] = 1 * 5/9 + 0 * ...$

$E[X] = \sum_{i=0}^{20}5/9$

$= 11...$

# Example
Your company is hiring an assistand ant you need to fill the position quickly. You hire an employment agency. They send one canidate each day and charge a small fee ($c_1$) for each canidate. Hiring a canidate has an additional associated cost ($c_2$). You want to have the best canidate at all times. After you interview each canidate, if s/he is bettter than your current assistant, you fire teh current one and hire the interviewee.

```
Hire-Assistant(n):
    best = 0
    for i = 1 to n
        interview canidate i
        if canidate is better than best
            if best > 0 fire best
            best = i
            hire canidate i
```

Cost of interview = $c_1n$

Cost of hiring = $c_2n$

Best case scenario: $c_1n + c_2$

Worst case scenario: $c_1n + c_2n$

Constant cost: $c_1n$

$E[X] = \sum_xxp(x)$

The varaibility will be within $c_2$ and $c_2n$

We could naively assume that the cost is $c_2\frac{n}{2}$, though this is innacurate.

Let's define an indicator random variable.


We can define it as: 1 if canidate is hired, 0 otherwise.

Total canidates hired = $X_1 + X_2 + ... + X_n$

$E[X] = E[X_1 + X_2 + ... + X_n] = E[\sum_{i=1}^{n}X_i]$

$= \sum_{i=1}^{n}E[X_i]$

$E[X_i] = 1*$ Prob($i^{th}$ canidate is hired) + $0 * $ Prob($i^{th}$ candidate is not hired.)

X is the outcome, P(x) is the distribution of X.

In this problem, a new problem has arisen.

We don't know the probability value of the ith candidate being hired.

In the real world, this is very common. We know the outcome, but not the distribution.

For example, if Dr. Meena is looking at the height of the students in the class, being the X. (this is generally random) This will look like a gaussian distribution. If we made a plot of student's height, Most people will be near the average, though some will be taller, and some will be shorter. On a graph, it will look like a parabala. If we were looking at students' weight, most likely we will also see a gaussian distribution. In the real world, when we don't know the distribution, we can make an assumption on it, with a gaussian distribution being accurate on average.

Even in salaries, most people are near the average, with some very rich people, and some very poor people.

In this problem, we will not make an assumption that the distribution is gaussian.

For this case, it may be better to use a uniform distribution.

For candidates, we will assume that all candidates have an equal chance of being hired.

In uniform distribution this case is $\frac{1}{n}$

So we will make that assumption for this problem, which should be good in theory.

$E[X_i] = 1 * \frac{1}{i}$

$E[X] = \sum_{i=1}{n}\frac{1}{i}$


### Arithematic series

a,d

a, a+d, a+2d, a+3d, a+4d, ...

### Harmonic series

a,d

1/a 1/{a+d}, 1/{a+2d}, ...

Or example is a harmonic series.

Adding a harmonic series, leads to some sort of a log function

so $\sum_{i=1}^{n}\frac{1}{n} = \log n$

so our average cost is $= c_1n + c_2\log n$


