/*
Graph Representation
====================
Topic: Adjacency List Directed weighted

0-----1
     / \
    2---3

    2
0 -----> 1

    4
1 ------> 2

    8
3 -------> 2

    7
3 --------> 1

0 -> (1, 2)
1 -> (2, 4)
2 ->
3 -> (2, 8), (1, 7)

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
    // O(1)
    // O(1)
    int nodes = 4;
    // O(1)
    // O(n)
    vector<pair<int, int>> adj_list[nodes];


    adj_list[0] = {{1,2}};
    adj_list[1] = {{2,4}};
    adj_list[2] = {};
    adj_list[3] = {{2, 8},{1,7}};



    // O(E*2) -> O(E) -> O(n^2)
    // O(E*2) -> O(E) -> O(n^2)
    // adj_list[0].push_back({1, 2});
    // adj_list[1].push_back({2, 4});
    // adj_list[3].push_back({2, 8});
    // adj_list[3].push_back({1, 7});
    

    // O(2*E) -> O(E) -> O(n^2)
    // O(1)
    for (int i = 0; i < nodes; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adj_list[i].size(); j++)
        {
            cout <<"("<< adj_list[i][j].first<< ", " << adj_list[i][j].second<<")"<< " ";
        }
        cout << endl;
    }

    return 0;
}
