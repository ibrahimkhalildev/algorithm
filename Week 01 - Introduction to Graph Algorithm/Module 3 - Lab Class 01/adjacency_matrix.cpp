/*
Graph Representation
====================

Topic: Adjacency Matrix

0-----1
     / \
    2---3

# total nodes = 4
# total edge = 4
# Undirected + Unweighted


matrix -> #of nodes x #of nodes
       -> 4x4

matrix[i][j] = 1
    if and only if (i -> j)

0 -> 1
1 -> 0
1 -> 2
1 -> 3
2 -> 1
2 -> 3
3 -> 1
3 -> 2

0 1 0 0
1 0 1 1
0 1 0 1
0 1 1 0

*/

/*
Adj Matrix
-----------
Time Complexity -> O(n^2)
Space Complexity -> O(n^2)

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int nodes = 4;           // O(1)
    int matrix[nodes][nodes] = {}; // O(n^2)

    // O(n^2)
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            matrix[i][j] = 1;
        }
    }

    // matrix[0][1] = 1; // O(1)
    // matrix[1][0] = 1;
    // matrix[1][2] = 1;
    // matrix[2][1] = 1;
    // matrix[2][3] = 1;
    // matrix[3][2] = 1;
    // matrix[3][1] = 1;
    // matrix[1][3] = 1;

    // O(n^2)
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
