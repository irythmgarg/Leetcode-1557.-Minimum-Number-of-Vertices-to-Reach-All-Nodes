// Problem: Find the Smallest Set of Vertices to Reach All Nodes in a Directed Acyclic Graph (DAG)
// Leetcode: https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        // Step 1: Initialize indegree for each node
        vector<int> indegree(n, 0);
        
        // Step 2: Calculate indegree of each node
        for (auto& edge : edges) {
            indegree[edge[1]]++;  // Increment indegree of destination node
        }

        // Step 3: Collect all nodes with 0 indegree
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0)
                result.push_back(i);  // These nodes have no incoming edges, so must be included
        }

        return result;
    }
};
