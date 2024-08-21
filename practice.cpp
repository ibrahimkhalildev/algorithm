#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
map<ll, bool> visited;
map<ll, vector<ll>> adj;
vector<ll> ans;
bool found = false;

void bfs(ll s)
{
    queue<ll> q;
    visited[s] = true;
    q.push(s);
    ans.push_back(s);

    while (!q.empty())
    {
        ll parent = q.front();
        q.pop();

        // We are ensuring only valid next steps based on the problem's rules
        for (ll child : adj[parent])
        {
            if ((parent * 2 == child || (parent % 3 == 0 && parent / 3 == child)) && !visited[child])   // <- CHANGED LOGIC
            {
                q.push(child);
                visited[child] = true;
                ans.push_back(child);
            }
        }
    }

    // Mark sequence as found if all elements are used
    if (ans.size() == n)   // <- NEW TERMINATION CONDITION
    {
        found = true;
    }
}

void init()
{
    ans.clear();
    visited.clear();
}

int main()
{
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                adj[v[i]].push_back(v[j]);
            }
        }
    }

    for (auto val : adj)
    {
        bfs(val.first);
        if (found) break;
        init();
    }

    for (auto val : ans)
        cout << val << " ";


    return 0;
}
