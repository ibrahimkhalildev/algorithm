/*
Graph Representation
====================
Topic: Adjacency List Directed weighted

0-----1
     / \
    2---3


   [
        [0, 1, 2]
        [1, 2, 4]
        [1, 3, 9]
        [2, 3, 1]
    ]

==============

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
    int nodes = 4;
    vector<vector<int>> edge_list = {
        {0, 1, 2},
        {1, 2, 4},
        {1, 3, 9},
        {2, 3, 1}};

    // O(E) -> O(n^2)
    // edge_list.push_back({0, 1});
    // edge_list.push_back({1, 2});
    // edge_list.push_back({1, 3});
    // edge_list.push_back({2, 3});

    for (int i = 0; i < edge_list.size(); i++)
    {
        cout << edge_list[i][0] << " " << edge_list[i][1]<<"| w - "<< edge_list[i][2] << endl;
    }

    return 0;
}
