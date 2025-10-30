# Graphs

TODO: go back and rewrite this.

# BFS function

```
BFS(G,s)
	for each vertex u \in V-{s}
		u.color = white
		u.pi = NIL; u.d = infinity
	s.color = gray
	s.d = 0
	Q = NULL
	enqueue(Q, s)
	while Q != NULL
		u = dequeue(Q)
		for each v in G.Adj(u)
			if v.color == white
				v.color = gray
				v.pi = u; v.d = u.d + 1
				enqueue(Q, v)
	    u.color = black
```


# DFS function

```
DFS(G)
	for each vertex u in G.V
		u.color = white; u.pi = NIL
	time = 0
	for each vertex u in G.V
		if u.color == white
			DFS-Visit(G,u)
```

```
DFS-Visit(G,u)
	time = time + 1; u.d = time
	u.color = gray
	for each v in G.adj[u]
		if v.color == white
			v.pi = u
			DFS-Visit(G,v)
	u.color = black
	time = time + 1; u.f = time
```

u.d is the discover time of vertex u.

u.f is the finish time of vertex u.

## Example

| v | v.d | v.f |
| - |  -  |  -  |
| a | 1   | 10  |
| b | 2   | 9   |
| c | 3   | 8   |
| d | 4   | 5   |
| e | 6   | 7   |
| f | 11  | 12  |
| g | 13  | 16  |
| h | 14  | 15  |


## Depth first forest

When we do a depth first search, we can create a graph based on the groups of parents that we find. This will create multiple trees.

# Parenthesis Theorem

In any DFS of a directed or undirected graph, G = (V,E), for any u.v in V, consider the invervals [u.d,u.f] and [v.d,v.f]. Exactly one of the following three properties holds

1. [u.d,u.f] is fully contained in pv.d,v.f] and u is a descendent of v in a DF tree

2. [v.d,v.f] is fully contained in [u.d,u.f] and v is a descendent of u in a DF-tree

3. [u.d,u.f[ an [v.d,v.f] do not overlap and neither v nor u is a descendent of the other in the DF forest.

# White Path Theorem

In a DFF of a graph G = (V,E), vertex v is a descendent of vertex u iff at time u.f, when DFS discovers u, there exists a path from u to v containing only white vertices.

Proof in 2 parts

v a descendant of u then a white path exists

a white path exists then v is a descendant of u.

This means that there is a path from u to v and if all the intermediate vertices are white, then v is the descendant of u.

# BFS and Path distances

Let $\delta(s,v)$ = the shortest path distance from s to v

Claim: upon trmintation, v.d = $\delta(s,v)$

We prove this clain in several steps


1. $(u,v) \in E \then \delta(s,v) \le \delta(s,u) + 1$

2.

Proves that $v.d = \delta(s,v)$ at the ocnvergence of the BFS algorithm.


# Spanning Tree
A connected, undirected, acyclic (without cycles) graph.

A set of spanning trees is a forest.

A graph G is a spanning tree, if there is exactly one path between every pair of vertices in G.

Properties:

v vertices, v-1 edges.

If you add any edge anywhere between the current vertices, it will form a cycle.

One way to form a spanning tree is to do a breadth first traversal. Any item that forms an edge can be discarded.


Spanning trees do not have too many applications.

A Minimum Spanning tree is useful though.

## Example 

Say you need to connect telepone wires from a central office to a group of houses.

### Naive Approach
Connect every house directly to the office

This is not ideal, we want to have a tree in which the length of cables is the least.

### Optimal Approach
An optimal approach would be to daisy chain from house to house.

### Applications
a Minimum Spanning Tree is a weighted, undirected graph.

We can generate one with a weighted graph.

We want to connect to the items with the least amount of weight.

In terms of how it works, is not about the shortest connection, but the sum of all connections that has least total weight.

Our goal is to minimize the total cost of the tree.

i.e. optimization problem.

This means that it can be solved with DP or a greedy algorithm.

## Kruskal's Algorithm
Given a graph, we can obtain a minimum spanning tree

In short, sort the edges in ascending order, then greedily pick an edge.

If it does not form a cycle, add it to the spanning tree.

Keep iterating through the list until you have formed a full minimum spanning tree.

You can detect a cycle with the set algorithms, and `find-set`.

```
Kruskal(G,w)
	A = EMPTY_SET
	for each v in V
		Make-Set(v)
	sort the edges of E in non-decreasing order by w
	for each (u,v) in G.E
		if Find-Set(u) != Find-Set(v)
			A = A UNION {(u,v)}
			Union(u, v)
	return A
```

## Prim's Algorithm
You start with a starting vertex.

Set all other items to an infinite distance.

Set the closest item's distance.

Pick the next vertex with the smallest distance.

Generally done with a priority queue.

When you select an item, if the distance is closer, update that nodes distance to the lesser item.

```
Prim(G,w,r)
	for each u in G.V
		u.key = INF
		u.pi = NIL
	r.key = 0
	Q = G.V
	while Q != EMPTY SET
		u = EXTRACT-MIN(Q)
		for each v in G.adj[u]
			if v in Q and w(u,v) < v.key
				v.pi = u
				v.key = w(u,v)
				Decrease-key(Q, V, w(u,v))
## Generic-MST
```
Generic-MST(G, w)
	A = NULL
	while A does not form a spanning tree
		find an edge (u,v) that is safe for A
		A = A UNION {(u,v)}
	return A
```

### Cut
1. A cut (S, V-S) of an undirected graph
G = {V,E} is a partition of V
S = {a, b, d ,e}
V-S = {h, i , c, g, f}

2. Edge (u,v) crosses the cut (S,V-S) if one of its end points is in S & other in V-S
3. A cut respects a set A of edges if no edges in A crosses the cut.
4. An edge is a light edge crossing the cut if its weight is minimum of any edge crossing the cut.

The light edge is considered the safe edge.

## Theorem 21.1

Let $A = \{V, E\}$ be a connected, undirected graph, with weight $w$. Let $A$ be a subset of edge $E$ that is included in some minimum spanning tree for $G$

Let $(S, V-S)$ be any cut of $G$ that respects $A$ and let $(u,v)$ be a light edge crossing $(S,V-S)$. The edge $(u, v)$ is a safe edge for A.

Proof: Let $T$ be a minimum spanning tree that includes $A$ and assume that light edge $(u,v)$ is not part of $T$.

We will construct another $T'$ by copying $T$ that includes $A$ and the light edge $(u,v)$.

Adding $(u,v)$ to T will form a cycle

$w(T') = w(T) - w(x, y) + w(u, v)$

$w(T') \le w(T)$

Since $T$ is a MST, then $T'$ is also a MST. and $(u,v)$ is part of $T'$ (MST)

NOTE: will be in homework.



