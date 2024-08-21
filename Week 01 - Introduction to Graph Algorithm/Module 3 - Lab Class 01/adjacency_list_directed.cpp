/*
Graph Representation
====================
Topic: Adjacency List Directed

0-----1
     / \
    2---3

0 -> 1
1 -> 2
2 ->
3 -> 1, 2

Adj List Complexity
-----------
Time Complexity -> O(n^2)
Space Complexity -> O(n^2)

*/

#include <bits/stdc++.h>

using namespace std;

// Time complexity -> O(1) + O(n^2) + O(n^2) = O(n^2)
// Space complexity -> O(1) + O(n) + O(n^2) + O(1) = O(n^2)

int main()
{
    // O(1)
    // O(1)
    int nodes = 4;
    // O(1)
    // O(n)
    vector<int> adj_list[nodes];

    // O(E*2) -> O(E) -> O(n^2)
    // O(E*2) -> O(E) -> O(n^2)
    adj_list[0] = {1};
    adj_list[1] = {2};
    adj_list[2] = {};
    adj_list[3] = {1, 2};

    // O(2*E) -> O(E) -> O(n^2)
    // O(1)
    for (int i = 0; i < nodes; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adj_list[i].size(); j++)
        {
            cout << adj_list[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
