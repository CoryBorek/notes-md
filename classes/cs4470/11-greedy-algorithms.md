# Greedy Algorithms

 - Used to solve optimization problems
 - Only works when two conditions hold
   - Optimal solution is found by determining optimal solution of subproblems
   - Locally optimal choices lead to a globally optimal solution
     - If a greedy approach is used, you cannot claim it finds the optimal solution unless you prove these two properties hold!

## Fractional Knapsack

Given a knapsack with weight $W$

and given n items with a value and weight $(v_i,w_i)$

Items may be split into peices (think of gold dust)

Problem: Put items into the knapsack so that

1.) Total value is maximized
2.) Total Weight $\le W$

```
Fractional-Knapsack(v,w,W)
    // v,w contain weight/value of n items
    Index items so that v[i]/w[i] >= v[i+1]/w[i+1]
    i = 1
    load = 0
    S = Array[1..n] of 0's
    while load < W and i <= n
        if w[i] <= W - load
            take all of item i
            load = load + w[i]; S[i] = 1
        else
            load = W
            S[i] = (W-load)/w[i]
        i = i + 1
    return S
```