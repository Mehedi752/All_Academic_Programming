
// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
int n;
int partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l, j = h;
    while (i < j)
    {
        while (a[i] <= pivot)
        {
            i++;
        }

        while (a[j] > pivot)
        {
            j--;
        }

        if (i < j)
            swap(a[i], a[j]);
    }
    swap(pivot, a[j]);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << '\n';
    return j;
}

void quick_sort(int a[], int l, int h)
{
    if (l >= h)
        return;
    int p;
    p = partition(a, l, h);
    quick_sort(a, l, p - 1);
    quick_sort(a, p + 1, h);
}

int main()
{
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Unsorted Array : " << '\n';
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";  cout << '\n';

    // Using Quicksort Algorithm to sort the array A.
    quick_sort(a, 0, n-1);

    cout << "Sorted Array : " << '\n';
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";  cout << '\n';
}
