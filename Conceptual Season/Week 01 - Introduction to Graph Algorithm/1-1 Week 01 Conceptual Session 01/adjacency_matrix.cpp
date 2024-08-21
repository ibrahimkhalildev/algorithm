#include <bits/stdc++.h>

using namespace std;

int main()
{
    // node = n -> 9;
    // edge number = m -> 9;

    int n = 9, m;
    cin >> m;
    int adjMatrix[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            adjMatrix[i][j] = 0;
        }
    }

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << adjMatrix[i][j] << " ";
        cout << '\n';
    }

    return 0;
}