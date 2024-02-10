// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int const N = 1e5 + 10;
vector<int> graph[N];
int visited[N], level[N];

void bfs(int source)
{
    queue<int> qt;
    qt.push(source);
    visited[source] = 1;

    while (!qt.empty())
    {
        int current_vertex = qt.front();
        qt.pop();
        cout << current_vertex << " ";
        for (auto &child : graph[current_vertex])
        {
            if (!visited[child])
            {
                qt.push(child);
                visited[child] = 1;
                level[child] = level[current_vertex] + 1;
            }
        }
    }
}

void Mehedi()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int nd, eg;
        cin >> nd >> eg;
        graph[nd].push_back(eg);
        graph[eg].push_back(nd);
    }
    bfs(1);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        Mehedi();
    return 0;
}
