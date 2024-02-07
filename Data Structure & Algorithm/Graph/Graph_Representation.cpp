#include <bits/stdc++.h>
using namespace std;
int const N = 1e3;
int graph[N][N];
vector<int> graph_list[N];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int nd, eg;
        cin >> nd >> eg;

        // Input for Adjacency Matrix representation.
        graph[nd][eg] = 1;
        graph[eg][nd] = 1;

        // Input for Adjacency List representation.
        graph_list[nd].push_back(eg);
        graph_list[eg].push_back(nd);
    }

    cout << "Adjacency Matrix Representation : " << '\n';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << graph[i][j] << " ";
        cout << '\n';
    }

    cout << "Adjacency List Representation : " << '\n';
    for (int i = 1; i <= graph_list.size(); i++)
        for (int j = 1; j <= graph_list.size(); j++)
}
