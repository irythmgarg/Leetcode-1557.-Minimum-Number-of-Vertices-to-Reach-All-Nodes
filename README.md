# Leetcode-1557.-Minimum-Number-of-Vertices-to-Reach-All-Nodes

# 🚀 Minimum Number of Vertices to Reach All Nodes

This project contains a clean and efficient C++ solution to the problem of finding the smallest set of vertices from which all nodes in a **Directed Acyclic Graph (DAG)** can be reached.

🔗 [LeetCode Problem Link](https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/)

---

## 📌 Problem Statement

Given a directed acyclic graph with `n` nodes labeled from `0` to `n - 1`, and a list of directed edges, return the smallest set of vertices from which all nodes are reachable.

> The graph is guaranteed to be a DAG (no cycles).

---

## 💡 Intuition

A node with **no incoming edges** cannot be reached from any other node. So, we must **include all such nodes** in our result to ensure reachability for the entire graph.

---

## 🧠 Algorithm

1. Create an array to store the **indegree** of each node.
2. Traverse all edges and update the indegree.
3. Collect nodes with **zero indegree** — these are the starting nodes.

---

## 🧾 Example

### Input:
n = 6
edges = [[0,1],[0,2],[2,5],[3,4],[4,2]]
### Output:
[0,3]
