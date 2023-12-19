#include<bits/stdc++.h>
using namespace std;
int const N = 1e5+10;
vector < int > graph[N];
bool visited[N];
void dfs(int vertex) 
{
    cout<<vertex<<'\n';
    visited[vertex] = 1;
    for(auto child: graph[vertex]) 
    {
        cout<<"Parent : "<<vertex<<" "<<"Children : "<<child<<'\n';
        if(visited[child]) continue;
        dfs(child);
    }
}

int main() 
{
    int n, m;
    cin>>n>>m;
    for(int i = 1; i <= m; i++) 
    {
        int nd,eg;
        cin>>nd>>eg;
        graph[nd].push_back(eg);
        graph[eg].push_back(nd);
    }
    dfs(1);
}
