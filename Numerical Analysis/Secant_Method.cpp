// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

double error_find(double x1, double x0)
{
    return abs(x1 - x0) / x1;
}

double f(double x)
{
    return 3 * x - cos(x) - 1;
}

double Secant(double x0, double x1, double ea)
{
    double error_tm = 1, x2;
    while (error_tm > ea)
    {
        x2 = x1 - ((x1 - x0) / (f(x1) - f(x0))) * f(x1);
        if (f(x2) == 0)
            break;
        x0 = x1;
        x1 = x2;
        error_tm = error_find(x1, x0);
    }
    return x2;
}

int main()
{
    double x0, x1, ea = 0.00000001;
    cin >> x0 >> x1;
    double root = Secant(x0, x1, ea);
    cout << root << endl;
}
