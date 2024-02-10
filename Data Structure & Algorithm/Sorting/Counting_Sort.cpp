// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
int MAX = 101;
void Mehedi()
{
    ll n;
    cin >> n;
    vector<ll> arr(n),count(MAX, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }
    for (int i = 1; i < MAX; i++)
    {
        for (int j = 1; j <= count[i]; j++)
            cout << i << " ";
    }
    cout << '\n';
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
