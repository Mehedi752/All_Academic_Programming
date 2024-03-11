// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

void Mehedi()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll val, index = -1;
    cin >> val;
    for (int i = 0; i < n; i++)
        if (arr[i] == val)
            index = i;

    if (index == -1)
        cout << "Search Unsuccessful" << '\n';
    else
        cout << index + 1 << '\n';
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
