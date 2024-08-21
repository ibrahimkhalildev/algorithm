// https://codeforces.com/problemset/problem/977/D
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
map<ll, bool> vistited;
map<ll, vector<ll>> adj;
vector<ll> ans;
bool found = false;
void bfs(ll s)
{
    queue<ll> q;
    vistited[s] = true;
    q.push(s);
    ans.push_back(s);

    while (!q.empty())
    {
        if (ans.size() == n)
        {
            found = true;
            return;
        }
        ll parent = q.front();
        q.pop();

        for (ll child : adj[parent])
        {
            if ((parent * 2) == child && !vistited[child])
            {
                q.push(child);
                vistited[child] = true;
                ans.push_back(child);
            }
            else if ((parent % 3 == 0) && (parent / 3) == child && !vistited[child])
            {
                q.push(child);
                vistited[child] = true;
                ans.push_back(child);
            }
        }
    }
}

void init()
{
    ans.clear();
    vistited.clear();
}

int main()
{
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i != j)
                adj[v[i]].push_back(v[j]);

    for (auto val : adj)
    {
        bfs(val.first);
        if (found)
            break;
        init();
    }

    for (auto val : ans)
        cout << val << " ";

    return 0;
}