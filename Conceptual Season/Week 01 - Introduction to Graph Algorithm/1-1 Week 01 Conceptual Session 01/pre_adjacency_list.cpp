#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 1 -> 2, 5,1

    vector<int> v[5];
    v[1].push_back(2);
    v[1].push_back(5);
    v[1].push_back(1);

    for (int i = 0; i < v[1].size(); i++)
    {
        cout << v[1][i] <<' ';
    }
    cout << '\n';


    return 0;
}
